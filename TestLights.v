`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:00:14 07/04/2018
// Design Name:   Lights
// Module Name:   C:/Users/Arosha/Desktop/HDL/Traffic_Controller_Project/TestLights.v
// Project Name:  Traffic_Controller_Project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Lights
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TestLights;

	// Inputs
	reg [6:0] light_signals;
	reg clk;

	// Outputs
	wire Rm;
	wire Ym;
	wire Gm;
	wire Rs;
	wire Ys;
	wire Gs;
	wire W;

	// Instantiate the Unit Under Test (UUT)
	Lights test (
		.light_signals(light_signals), 
		.Rm(Rm), 
		.Ym(Ym), 
		.Gm(Gm), 
		.Rs(Rs), 
		.Ys(Ys), 
		.Gs(Gs), 
		.W(W), 
		.clk(clk));

	initial begin
		forever #10 clk = ~clk;
	end

	initial begin
		// Initialize Inputs
		light_signals = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		light_signals = 7'b100_0000;
		
		#60
		light_signals = 7'b010_0000;
		
		#60
		light_signals = 7'b001_0000;
		
		#60
		light_signals = 7'b000_1000;
		
		#60
		light_signals = 7'b000_0100;
		
		#60
		light_signals = 7'b000_0010;
		
		#60
		light_signals = 7'b000_0001;

	end
      
endmodule

