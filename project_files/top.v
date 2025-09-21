`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2025/09/10 19:20:39
// Design Name: 
// Module Name: top
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



// 顶层模块设计
module top (
    input wire clk_2m,       // 2MHz 系统时钟信号
    input wire clk_10k,      // 10kHz 输入时钟信号
    input wire rst_n,        // 复位信号
    output wire m_seq_out,    // m 序列
    output wire sys_clk_out, // 提取出的位同步信号
    output wire locked,       // 判定是否锁住的标签
    output wire [3:0] DCBA, // 数码管 BCD 译码输出
    output wire [5:0] w_out,    // 数码管驱动控制
	 output wire dot    // 消除小数点
);


// m 序列生成模块
m_sequence_generator m_seq_gen (
    .clk_10k(clk_10k),
    .rst_n(rst_n),
    .m_seq_out(m_seq_out)
);


// Solution1：采用最大脉宽法从 m 序列中提取位同步时钟信号
// max_clock_recovery max_clock_recovery (
// 	.sys_clk(clk_2m),
// 	.rst(rst_n),
// 	.clk(clk_10k),
// 	.m_seq(m_seq_out),
// 	.clk_out(sys_clk_out)
// );


// Solution2：采用数字锁相环从 m 序列中提取位同步时钟信号
dpll_clock_recovery dpll_clock_recovery (
   .clk_2m(clk_2m),
   .rst_n(rst_n),
    .clk_in(clk_10k),
   .m_seq_in(m_seq_out),
   .recovered_clk(sys_clk_out),
   .locked(locked)
);


// 动态频率显示模块
display display (
		.sys_clk(clk_2m),
		//.sys_clk_out(sys_clk_out),
		.sys_clk_out(clk_10k),
		.rst_n(rst_n),
		.dot(dot),
		.DCBA(DCBA),
		.w_out(w_out)
);




endmodule