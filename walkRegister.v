`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:58:32 07/03/2018 
// Design Name: 
// Module Name:    WalkRegister 
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

module WalkRegister (walkRequest_in, walkRegister_status, clk, walkRegister_reset, sys_reset);
    
	input clk, walkRegister_reset, walkRequest_in, sys_reset;
   output walkRegister_status;
	reg walkRegister_status;

	always @ ( posedge clk )
		begin
		walkRegister_status <= (walkRegister_reset || sys_reset) ? 0 :	walkRegister_status ? walkRegister_status : walkRequest_in ;
	end
endmodule