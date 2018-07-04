`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:00:41 07/04/2018 
// Design Name: 
// Module Name:    Divider 
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
module Divider(enable_output, clk, devider_reset);

    output enable_output;
    input clk, devider_reset;
	 
	 reg enable_output;
	 reg[24:0] sys_tick_count = 25'd0;
	 parameter one_second_count = /*25'd26_999_999*/ 25'd3;
	 
	 always @ (posedge clk)
		begin
			
			enable_output = 0;				//Check if this should be <= or =
			
			if(sys_tick_count == one_second_count || devider_reset == 1)
				sys_tick_count <= 25'd0;
			else
				sys_tick_count <= sys_tick_count + 1;
				
			if(sys_tick_count == one_second_count)
				enable_output = 1;
				
		end
	 
endmodule
