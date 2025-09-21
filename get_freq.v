`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Frequency Counter with 6-digit BCD Display
//  sys_clk_out  6 
//////////////////////////////////////////////////////////////////////////////////

`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Frequency Counter with 6-digit BCD Display (ISE-compatible)
// -  always 
// -  +  sys_clk 
// -  dabble ->BCD ()
// Author: hans_solution (fixed)
//////////////////////////////////////////////////////////////////////////////////
module get_freq (
    input  wire        sys_clk,       //  ( 2 MHz)
    input  wire        sys_clk_out,   //  (10kHz ~ 500kHz)
    input  wire        rst_n,         // 
	 output reg [31:0] freq_out
);

    //==============================
    // 
    //==============================
    parameter SYS_CLK_FREQ = 2000000; // Hz
    parameter GATE_TIME    = 1;        // 
    localparam integer GATE_CNT = SYS_CLK_FREQ * GATE_TIME;

    //==============================
    // gate_en, gate_done
    //==============================
    reg [31:0] gate_cnt;
    reg        gate_en;
    reg        gate_done;

    always @(posedge sys_clk or negedge rst_n) begin
        if (!rst_n) begin
            gate_cnt  <= 0;
            gate_en   <= 1'b0;
            gate_done <= 1'b0;
        end else begin
            if (gate_cnt < GATE_CNT - 1) begin
                // 
                gate_cnt  <= gate_cnt + 1;
                gate_en   <= 1'b1;
                gate_done <= 1'b0;
            end else begin
                // 
                gate_cnt  <= 0;
                gate_en   <= 1'b0;
                gate_done <= 1'b1; // 1
            end
        end
    end

    //==============================
    //  ( sys_clk )
    //==============================
    reg sync0, sync1;
    wire pulse_edge;

    always @(posedge sys_clk or negedge rst_n) begin
        if (!rst_n) begin
            sync0 <= 1'b0;
            sync1 <= 1'b0;
        end else begin
            sync0 <= sys_clk_out;
            sync1 <= sync0;
        end
    end

    // 
    assign pulse_edge = sync0 & ~sync1; //  sys_clk 

    //==============================
    //  sys_clk  gate_done  freq_value
    //==============================
    reg [31:0] pulse_cnt;
    reg [31:0] freq_value;

    always @(posedge sys_clk or negedge rst_n) begin
        if (!rst_n) begin
            pulse_cnt  <= 32'd0;
            freq_value <= 32'd0;
        end else begin
            if (gate_en) begin
                if (pulse_edge)
                    pulse_cnt <= pulse_cnt + 1;
            end
            if (gate_done) begin
                freq_value <= pulse_cnt; // 
                pulse_cnt  <= 32'd0;     // 
            end
        end
    end

    //==============================
    //  -> 6 BCD ( dabbleISE )
    //  always  reg 
    //==============================
    reg [3:0] bcd0, bcd1, bcd2, bcd3, bcd4, bcd5;
    reg [31:0] value;   //  value 
    integer i;

    always @(*) begin
        // 
        bcd0 = 4'd0; bcd1 = 4'd0; bcd2 = 4'd0;
        bcd3 = 4'd0; bcd4 = 4'd0; bcd5 = 4'd0;

        //  freq_value 
        value = freq_value;
		  freq_out <= freq_value;

        //  dabble 
        for (i = 31; i >= 0; i = i - 1) begin
            // 
            if (bcd0 >= 5) bcd0 = bcd0 + 3;
            if (bcd1 >= 5) bcd1 = bcd1 + 3;
            if (bcd2 >= 5) bcd2 = bcd2 + 3;
            if (bcd3 >= 5) bcd3 = bcd3 + 3;
            if (bcd4 >= 5) bcd4 = bcd4 + 3;
            if (bcd5 >= 5) bcd5 = bcd5 + 3;

            //  1 
            {bcd5, bcd4, bcd3, bcd2, bcd1, bcd0} =
                {bcd5, bcd4, bcd3, bcd2, bcd1, bcd0} << 1;

            // 
            bcd0[0] = value[i];
        end
    end





//reg [2:0] cnt;
//
//always @(posedge clk_2m) begin
//    if (!rst_n)
//        cnt <= 0;
//    else
//        cnt <= cnt + 1;
//end
//
//
//always @ (cnt) begin
//    case (cnt)
//        3'b000: begin w_out <= 6'b011111; DCBA <= 4; dot<=1; end
//        3'b001: begin w_out <= 6'b101111; DCBA <= 1; end
//        3'b010: begin w_out <= 6'b110111; DCBA <= 5; end
//        3'b011: begin w_out <= 6'b111011; DCBA <= 4; end
//        3'b100: begin w_out <= 6'b111101; DCBA <= 1; end
//        3'b101: begin w_out <= 6'b111110; DCBA <= 1; end
//        default: begin w_out <= 6'b111111; DCBA <= 0; end
//    endcase
//end
//
//
endmodule
