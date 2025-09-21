`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:55:52 09/16/2025 
// Design Name: 
// Module Name:    max_clock_recovery 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module max_clock_recovery(
	input wire sys_clk,        // 2MHz
    input wire rst,         // 
	 input wire clk,
    input wire m_seq,      // m
    output reg clk_out // 10kHz
    );

reg [23:0] cyc_fnl;
reg [2:0] tick=0;
wire pos;
wire neg;
reg [7:0] pos_cnt=0;
reg [23:0] cyc_cnt=0;
reg [23:0] cyc_min=1;
reg [23:0] out_cnt=0;

always@(posedge sys_clk or negedge rst)begin
	if(!rst)begin
		tick<=0;
	end else begin
		tick<={tick[1:0],m_seq};
	end
end

assign pos=((~tick[2])&(tick[1]));
assign neg=((tick[2])&(~tick[1]));

always@(posedge sys_clk or negedge rst)begin
	if(!rst)begin
		pos_cnt<=0;
		cyc_cnt<=0;
		cyc_min<=1;
		cyc_fnl<=7982;
	end else begin
		if(pos)begin
			if(pos_cnt<63)begin
				pos_cnt<=pos_cnt+1;
			end else begin
				pos_cnt<=0;
			end
		end
		if(neg)begin
			cyc_cnt<=0;
			if(pos_cnt==63)begin
				cyc_min<=1;
				cyc_fnl<=(cyc_cnt>cyc_min)?(cyc_cnt):(cyc_min);
			end else begin
				cyc_min<=(cyc_cnt>cyc_min)?(cyc_cnt):(cyc_min);
			end
		end
		else if(tick[1])begin
			cyc_cnt<=cyc_cnt+1;
		end
	end
end

always@(posedge sys_clk or negedge rst)begin
	if(!rst)begin
		out_cnt<=0;
		clk_out<=0;
	end else begin
		if(pos|neg)begin
			out_cnt<=0;
			clk_out<=1;
		end else begin
			if(out_cnt<(cyc_fnl>>4)-1)begin
				out_cnt<=out_cnt+1;
				
			end else begin
				clk_out<=~clk_out;
				out_cnt<=0;
			end
			
		end
	end
end




endmodule
