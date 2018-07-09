`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:04:32 07/07/2018
// Design Name:   Debouncer
// Module Name:   C:/Users/Arosha/Desktop/HDL/Traffic_Controller_Project/DebouncerTest.v
// Project Name:  Traffic_Controller_Project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Debouncer
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module DebouncerTest;

	// Inputs
	reg reset_in;
	reg walkRequest_in;
	reg reprogram_in;
	reg clk;
	reg sys_reset;

	// Outputs
	wire reset_db_out;
	wire walkRequest_db_out;
	wire reprogram_db_out;

	// Instantiate the Unit Under Test (UUT)
	Debouncer test (
		.reset_in(reset_in), 
		.walkRequest_in(walkRequest_in), 
		.reprogram_in(reprogram_in), 
		.reset_db_out(reset_db_out), 
		.walkRequest_db_out(walkRequest_db_out), 
		.reprogram_db_out(reprogram_db_out), 
		.clk(clk), 
		.sys_reset(sys_reset)
	);

	initial begin
		// Initialize Inputs
		reset_in = 0;
		walkRequest_in = 0;
		reprogram_in = 0;
		clk = 0;
		sys_reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		
		reset_in = 1;
		walkRequest_in = 1;
		reprogram_in = 1;
		
	end
      
	initial begin 
		forever #10 clk = ~clk;
	end
		
endmodule
		
