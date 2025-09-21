`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2025/09/10 19:15:46
// Design Name: 
// Module Name: dpll_clock_recovery
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////



module dpll_clock_recovery (
    input wire clk_2m,        // 2MHz 系统时钟
    input wire rst_n,         // 复位信号
	input wire clk_in,          // 外部输入信号，10kHz+
    input wire m_seq_in,      // m 序列
    output reg recovered_clk, // 提取出的位同步信号
    output reg locked         // 是否锁住
);



// 和动态频率显示中的思路一致，利用 1s 时间窗计算输入信号 clk_in 的频率（不多赘述）
parameter clk_2m_FREQ = 2000000;
parameter GATE_TIME    = 1;
localparam integer GATE_CNT = clk_2m_FREQ * GATE_TIME;

reg [31:0] gate_cnt;
reg        gate_en;
reg        gate_done;

always @(posedge clk_2m or negedge rst_n) begin
    if (!rst_n) begin
        gate_cnt  <= 0;
        gate_en   <= 1'b0;
        gate_done <= 1'b0;
    end else begin
        if (gate_cnt < GATE_CNT - 1) begin
            gate_cnt  <= gate_cnt + 1;
            gate_en   <= 1'b1;
            gate_done <= 1'b0;
        end else begin
            gate_cnt  <= 0;
            gate_en   <= 1'b0;
            gate_done <= 1'b1;
        end
    end
end

reg sync0, sync1;
wire pulse_edge;

always @(posedge clk_2m or negedge rst_n) begin
    if (!rst_n) begin
        sync0 <= 1'b0;
        sync1 <= 1'b0;
    end else begin
        sync0 <= clk_in;
        sync1 <= sync0;
    end
end

assign pulse_edge = sync0 & ~sync1;

reg [31:0] pulse_cnt;
reg [31:0] freq_value;

always @(posedge clk_2m or negedge rst_n) begin
    if (!rst_n) begin
        pulse_cnt  <= 32'd0;
        freq_value <= 32'd0;
    end else begin
        if (gate_en) begin
            if (pulse_edge)
                pulse_cnt <= pulse_cnt + 1;
        end
        if (gate_done) begin
            freq_value <= pulse_cnt;    // 得到输入信号频率 freq_value
            pulse_cnt  <= 32'd0;
        end
    end
end



// ============================================================================================================
// 数字锁相环部分

// 设置增益参数，用于后续 PI 控制部分
parameter KP = 8'h10;   // 比例环节增益 KP
parameter KI = 8'h05;   // 积分环节增益 KI


// 根据输入信号频率动态计算数控振荡器（NCO）相位增量，决定 NCO 每个系统时钟周期前进多少相位
reg [31:0] INIT_INC;
always @(posedge clk_2m or negedge rst_n) begin 
    if (!rst_n) 
        INIT_INC <= 32'd0; 
    else begin 
        INIT_INC <= freq_value * 32'd2147;  // 根据输入信号频率动态计算 INIT_INC
        // 这里做了近似计算，实际上的公式应该为 INIT_INC = 2^32 / (2MHz / freq_value)，化简后得到 INIT_INC = 2147.48 * freq_value
    end 
end


// 对 M 序列输入作边沿检测
reg [2:0] m_seq_delay;  // 先创建一个 3 位移位寄存器
always @(posedge clk_2m) m_seq_delay <= {m_seq_delay[1:0], m_seq_in};

wire edge_detected = (m_seq_delay[1] ^ m_seq_delay[0]) & ~(m_seq_delay[2] ^ m_seq_delay[1]);
// 只有当前两拍稳定，并且最近两拍发生变化，才判断为边沿（消除毛刺的影响）


// 数字锁相环核心控制环路部分
reg signed [15:0] phase_error;  // 当前相位误差
reg signed [31:0] int_error;    // 积分累加的相位误差   
reg [31:0] dco_phase;           // DCO 相位累加器
reg [31:0] dco_increment;       // 相位累加步长
reg [7:0] lock_counter;         // 锁定计数器（用于判定是否“锁住”）
reg signed [15:0] phase_now;    // 当前相位
reg signed [15:0] phase_diff;   // wrap 后的相位差


always @(posedge clk_2m or negedge rst_n) begin
    if (!rst_n) begin
        phase_error   <= 16'd0;
        int_error     <= 32'd0;
        dco_phase     <= 32'd0;
        dco_increment <= INIT_INC;
        recovered_clk <= 1'b0;
        locked        <= 1'b0;
        lock_counter  <= 8'd0;
        phase_now     <= 16'd0;
        phase_diff    <= 16'd0;
    end else begin
        if (edge_detected) begin
            // dco_phase 是 32 位相位累加器，高 16 位代表“当前相位角度”
            // 每次输入信号的一个边沿到来时，取出 DCO 的相位，作为 相位对齐的参考点
            phase_now <= dco_phase[31:16];

            // 把相位差限制在 [-32768, +32767]（2^15，2^16），防止溢出
            // （因为相位是环绕的，0 度和 360 度等价，所以这里要限制在 0～180 度上)
            phase_diff <= phase_now;
            if (phase_now > 16'sd32767)
                phase_diff <= phase_now - 16'sd65536;
            else if (phase_now < -16'sd32768)
                phase_diff <= phase_now + 16'sd65536;

            // 得到一个有符号的相位误差
            phase_error <= phase_diff;


            // ======================================================================================
            // 环路滤波器部分（PI 控制器）
            // 积分器：累积相位误差（加上缩放，>>> 2 相当于除以 4，避免过大），进而消除相位上的长期偏差
            int_error <= int_error + (phase_error >>> 2);

            // 对积分误差做 限幅，避免发散
            if (int_error > 32'sh000FFFFF)
                int_error <= 32'sh000FFFFF;
            else if (int_error < -32'sh000FFFFF)
                int_error <= -32'sh000FFFFF;

            // INIT_INC：基础频率对应的初始步长
            // KP * phase_error：比例控制，快速修正相位差（过低锁相变慢，过高锁相不稳）
            // KI * int_error：积分控制，修正频率漂移
            // 移位（>>>）相当于缩放因子，避免系数过大
            dco_increment <= INIT_INC +
                             ((KP * phase_error) >>> 4) +
                             ((KI * int_error) >>> 8);

            // 锁定检测：如果相位误差很小（在 ±50 内），就增加 lock_counter；否则就减少
            if ((phase_error < 16'sd50) && (phase_error > -16'sd50)) begin
                if (lock_counter != 8'hFF)
                    lock_counter <= lock_counter + 1'b1;
            end else begin
                if (lock_counter != 8'h00)
                    lock_counter <= lock_counter - 1'b1;
            end
        end


        // NCO 更新部分
        // dco_phase：每个周期累加 dco_increment，形成相位信号
        // dco_phase[31]：取最高位作为方波输出，相当于恢复的时钟
        // locked：如果 lock_counter > 32，即连续判定锁住 32 次，认为 PLL 已经锁住
        dco_phase     <= dco_phase + dco_increment;
        recovered_clk <= dco_phase[31];          // 
        locked        <= (lock_counter > 8'd32); // 
    end
end





endmodule