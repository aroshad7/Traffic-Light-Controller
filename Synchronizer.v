`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:59:38 07/03/2018 
// Design Name: 
// Module Name:    Synchronizer 
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
module Synchronizer(reset_in, walkRequest_in, reprogram_in, sensor_in, reset_syn_out, walkRequest_syn_out, reprogram_syn_out, sensor_syn_out, clk);
	
	input reset_in, walkRequest_in, reprogram_in, sensor_in, clk; 
	output reset_syn_out, walkRequest_syn_out, reprogram_syn_out, sensor_syn_out;
	
	synchronizer_core reset_synchronizer(.clk(clk), .in(reset_in), .out(reset_syn_out));
	synchronizer_core walkRequest_synchronizer(.clk(clk), .in(walkRequest_in), .out(walkRequest_syn_out));
	synchronizer_core reprogram_synchronizer(.clk(clk), .in(reprogram_in), .out(reprogram_syn_out));
	synchronizer_core sensor_synchronizer(.clk(clk), .in(sensor_in), .out(sensor_syn_out));

endmodule
