`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:39:10 07/03/2018 
// Design Name: 
// Module Name:    Devider 
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
module Devider(enable_output, clk, devider_reset);

    output enable_output;
    input clk, devider_reset;
	 
	 reg enable_output;
	 reg sys_tick_count;
	 parameter one_second_count = 25'd26_999_999;
	 
	 always @ (posedge clk)
		begin
			
			enable_output <= 0;				//Check if this should be <= or =
			
			if(sys_tick_count == one_second_count || devider_reset == 1)
				sys_tick_count <= 25'd0;
			else
				sys_tick_count <= sys_tick_count + 1;
				
			if(sys_tick_count == one_second_count)
				enable_output <= 1;
				
		end
	 
endmodule
