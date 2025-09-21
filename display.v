`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Frequency Counter with 6-digit BCD Display (ISE-compatible)
// -  always 
// -  +  sys_clk 
// -  dabble ->BCD ()
// Author: hans_solution (fixed)
//////////////////////////////////////////////////////////////////////////////////


// 动态频率显示模块

module display (
    input  wire        sys_clk,       //  2MHz 系统时钟信号
    input  wire        sys_clk_out,   //  (10kHz ~ 500kHz) 外部输入信号
    input  wire        rst_n,         // 复位信号
	 output reg		  dot,              // 消除小数点信号
    output reg  [3:0]  DCBA,          //  数码管 BCD 译码输出
    output reg  [5:0]  w_out        // 数码管驱动控制
);



// 参数设置
parameter SYS_CLK_FREQ = 2000000; // 系统时钟信号频率
parameter GATE_TIME    = 1;        // 计数时间窗口
localparam integer GATE_CNT = SYS_CLK_FREQ * GATE_TIME; // 一个时间窗口内计数次数


reg [31:0] gate_cnt;    // 一个窗口内的系统时钟计数器
reg        gate_en;     // 时间窗口计数使能信号
reg        gate_done;   // 时间窗口计数终止标志



// 计数时间窗口开闭控制（每隔一秒便复位一次）
always @(posedge sys_clk or negedge rst_n) begin
    // 以系统时钟为基准
    if (!rst_n) begin
        // 复位时，所有计数器清零
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
            gate_done <= 1'b1; // 1
        end
    end
end



// 这里采用双触发器，以防直接采样 sys_clk_out 造成亚稳态
reg sync0, sync1;   
wire pulse_edge;    // 用于检测上升沿

always @(posedge sys_clk or negedge rst_n) begin
    if (!rst_n) begin
        sync0 <= 1'b0;
        sync1 <= 1'b0;
    end else begin
        sync0 <= sys_clk_out;   
        sync1 <= sync0;
    end
end

assign pulse_edge = sync0 & ~sync1; // 上升沿检测



// 窗口内的计数模块
reg [31:0] pulse_cnt;   // 用于统计在一个窗口内的输入信号脉冲数
reg [31:0] freq_value;  // 用于锁存上一个窗口的计数结果，用于显示

always @(posedge sys_clk or negedge rst_n) begin
    if (!rst_n) begin
        pulse_cnt  <= 32'd0;
        freq_value <= 32'd0;
    end else begin
        if (gate_en) begin
            if (pulse_edge)
                // 正常计数
                pulse_cnt <= pulse_cnt + 1;
        end
        if (gate_done) begin
            // 当窗口计数结束后
            freq_value <= pulse_cnt; // 锁存当前窗口的计数结果
            pulse_cnt  <= 32'd0;     // 重置当前窗口的计数结果
        end
    end
end



// 显示部分
// 二进制转 BCD，使用 Double Dabble 算法（即移位 + 3）
reg [3:0] bcd0, bcd1, bcd2, bcd3, bcd4, bcd5;
reg [31:0] value;   // 用于存放计数结果
integer i;  // 单纯用于计数

always @(*) begin
    // 初始化
    bcd0 = 4'd0; bcd1 = 4'd0; bcd2 = 4'd0;
    bcd3 = 4'd0; bcd4 = 4'd0; bcd5 = 4'd0;

    // 存放计数结果
    value = freq_value;

    //  dabble 
    for (i = 31; i >= 0; i = i - 1) begin
        // 不断进行“移位+3”操作，最终得到 10 进制下的 1Hz ~ 100kHz 各个数位上的数字，用于显示在数码管上
        
        // +3 修正
        if (bcd0 >= 5) bcd0 = bcd0 + 3;
        if (bcd1 >= 5) bcd1 = bcd1 + 3;
        if (bcd2 >= 5) bcd2 = bcd2 + 3;
        if (bcd3 >= 5) bcd3 = bcd3 + 3;
        if (bcd4 >= 5) bcd4 = bcd4 + 3;
        if (bcd5 >= 5) bcd5 = bcd5 + 3;

        // 移位
        {bcd5, bcd4, bcd3, bcd2, bcd1, bcd0} =
            {bcd5, bcd4, bcd3, bcd2, bcd1, bcd0} << 1;

        // 取下一位二进制数字
        bcd0[0] = value[i];
    end
end




// 显示部分（和学号动态显示的逻辑一致，不多赘述）
reg [2:0]  scan_sel;
reg [15:0] scan_cnt;

always @(posedge sys_clk or negedge rst_n) begin
    if (!rst_n) begin
        scan_cnt <= 16'd0;
        scan_sel <= 3'd0;
    end else begin
        if (scan_cnt >= 2000) begin
            scan_cnt <= 16'd0;
            scan_sel <= scan_sel + 1;
        end else begin
            scan_cnt <= scan_cnt + 1;
        end
    end
end

always @(*) begin
    case (scan_sel)
        3'd0: begin w_out = 6'b111110; DCBA = bcd5; dot<=1; end
        3'd1: begin w_out = 6'b111101; DCBA = bcd4; end
        3'd2: begin w_out = 6'b111011; DCBA = bcd3; end
        3'd3: begin w_out = 6'b110111; DCBA = bcd2; end
        3'd4: begin w_out = 6'b101111; DCBA = bcd1; end
        3'd5: begin w_out = 6'b011111; DCBA = bcd0; end
        default: begin w_out = 6'b111111; DCBA = 4'd0; end
    endcase
end


endmodule
