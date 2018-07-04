`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:25:03 07/03/2018 
// Design Name: 
// Module Name:    Debouncer 
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
module Debouncer (reset_in, walkRequest_in, reprogram_in, reset_db_out, walkRequest_db_out, reprogram_db_out, clk, sys_reset);
   input reset_in, walkRequest_in, reprogram_in, clk, sys_reset;
   output reset_db_out, walkRequest_db_out, reprogram_db_out;
	
	debouncer_core reset_debouncer(.reset(sys_reset), .clk(clk), .noisy(reset_in), .clean(reset_out));
	debouncer_core walkRequest_debouncer(.reset(sys_reset), .clk(clk), .noisy(walkRequest_in), .clean(walkRequest_db_out));
	debouncer_core reprogram_debouncer(.reset(sys_reset), .clk(clk), .noisy(reprogram_in), .clean(reprogram_db_out));

endmodule
