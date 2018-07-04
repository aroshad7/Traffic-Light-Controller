`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:32:49 07/03/2018 
// Design Name: 
// Module Name:    synchronizer_core 
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
module synchronizer_core(clk, in, out);
	
	parameter NSYNC = 2;
	input clk;
	input in;
	output out;
	
	reg [NSYNC-2:0] sync;
	reg out;

	always @ (posedge clk)
	begin
		{out,sync} <= {sync[NSYNC-2:0],in};
	end


endmodule
