`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2025/09/10 19:46:35
// Design Name: 
// Module Name: tb_top2
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


module tb_top2();

// 
parameter CLK10K_PERIOD = 100000; // 10kHz = 100us
parameter CLK2M_PERIOD = 500;    // 2MHz = 500ns
parameter RESET_TIME = 2000;     // 2us
parameter SIM_TIME = 20000000;   // 20ms

// 
reg clk_10k;
reg clk_2m;
reg rst_n;
wire m_seq_out;
wire sys_clk_out;
wire locked;

// 
top uut (
    .clk_2m(clk_2m),
    .clk_10k(clk_10k),
    .rst_n(rst_n),
    .m_seq_out(m_seq_out),
    .sys_clk_out(sys_clk_out),
    .locked(locked)
);

// 10kHz
initial begin
    clk_10k = 0;
    forever #(CLK10K_PERIOD/2) clk_10k = ~clk_10k;
end

// 2MHz
initial begin
    clk_2m = 0;
    forever #(CLK2M_PERIOD/2) clk_2m = ~clk_2m;
end

// 
initial begin
    rst_n = 0;
    #RESET_TIME rst_n = 1;
    #SIM_TIME ;
end

endmodule