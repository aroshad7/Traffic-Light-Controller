`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:32:21 07/04/2018 
// Design Name: 
// Module Name:    TrafficControl 
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
module TrafficControl(reset, clk, sensor, walkRequest, reprogram, timeSelector, timeValue, Rm, Ym, Gm, Rs, Ys, Gs, W);

	input reset, clk, sensor, walkRequest, reprogram;
   input [1:0] timeSelector;
   input [3:0] timeValue;
   output Rm, Ym, Gm, Rs, Ys, Gs, W;

	reg Rm, Ym, Gm, Rs, Ys, Gs, W;

	wire sys_reset, sensor_sync, WR_sync, WR, WR_reset, prog_sync, one_hz_enable, start_timer, expired;
	wire[1:0] interval;
	wire[3:0] time_value;
endmodule
