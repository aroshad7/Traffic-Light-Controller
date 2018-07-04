`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:52:50 07/04/2018
// Design Name:   Divider
// Module Name:   C:/Users/Arosha/Desktop/HDL/Traffic_Controller_Project/DividerTest.v
// Project Name:  Traffic_Controller_Project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Divider
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module DividerTest;

	// Inputs
	reg clk;
	reg devider_reset;

	// Outputs
	wire enable_output;

	// Instantiate the Unit Under Test (UUT)
	Divider test (
		.enable_output(enable_output), 
		.clk(clk), 
		.devider_reset(devider_reset)
	);

	initial begin
		forever #10 clk = ~clk;
	end

	initial begin
		// Initialize Inputs
		clk = 0;
		devider_reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		#300
		devider_reset = 1;

	end
      
endmodule

