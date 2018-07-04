`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:40:37 07/03/2018 
// Design Name: 
// Module Name:    Lights 
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
module Lights(light_signals, Rm, Ym, Gm, Rs, Ys, Gs, W);
	 input[6:0] light_signals;
    output Rm, Ym, Gm, Rs, Ys, Gs, W;
	 
    reg Rm, Ym, Gm, Rs, Ys, Gs, W;
	 
	 always @ (light_signals)
		begin
			
			Rm <= light_signals[6:6];
			Ym <= light_signals[5:5];
			Gm <= light_signals[4:4];
			Rs <= light_signals[3:3];
			Ys <= light_signals[2:2];
			Gs <= light_signals[1:1];
			W <= light_signals[0:0];
		
		end
		
endmodule
