`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2025/09/10 19:15:01
// Design Name: 
// Module Name: m_sequence_generator
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



module m_sequence_generator (
    input wire clk_10k,     // 10kHz
    input wire rst_n,      // ()
    output reg m_seq_out   // m
);



// 创建线性反馈移位寄存器（LFSR）
reg [7:0] lfsr;



// 本原多项式: f(x) = x^8 + x^4 + x^3 + x^2 + 1
wire feedback = lfsr[7] ^ lfsr[3] ^ lfsr[2] ^ lfsr[1];

always @(posedge clk_10k or negedge rst_n) begin
    if (!rst_n) begin
        // 复位（初始化）
        lfsr <= 8'b10101010; // 0
        m_seq_out <= 1'b0;
    end else begin
        // 进位，移位，输出 M 序列
        lfsr <= {lfsr[6:0], feedback};
        m_seq_out <= lfsr[7]; // 
    end
end

endmodule