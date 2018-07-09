`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:16:08 07/07/2018
// Design Name:   debouncer_core
// Module Name:   C:/Users/Arosha/Desktop/HDL/Traffic_Controller_Project/debouncer_core_test.v
// Project Name:  Traffic_Controller_Project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: debouncer_core
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module debouncer_core_test;

	// Inputs
	reg reset;
	reg clk;
	reg noisy;

	// Outputs
	wire clean;

	// Instantiate the Unit Under Test (UUT)
	debouncer_core test (
		.reset(reset), 
		.clk(clk), 
		.noisy(noisy), 
		.clean(clean)
	);

	initial begin
		// Initialize Inputs
		reset = 0;
		clk = 0;
		noisy = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		reset = 1;
		clk = 1;
		noisy = 1;		

	end
      
	initial begin
		forever #10 clk = !clk;
	end
		
endmodule

