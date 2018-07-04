`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:31:42 07/04/2018
// Design Name:   Timer
// Module Name:   C:/Users/Arosha/Desktop/HDL/Traffic_Controller_Project/TimerTest.v
// Project Name:  Traffic_Controller_Project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Timer
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TimerTest;

	// Inputs
	reg [3:0] input_value;
	reg enable;
	reg start_timer;
	reg clk;
	reg sys_reset;

	// Outputs
	wire expired;
	wire divider_reset;

	// Instantiate the Unit Under Test (UUT)
	Timer uut (
		.input_value(input_value), 
		.enable(enable), 
		.start_timer(start_timer), 
		.expired(expired), 
		.divider_reset(divider_reset), 
		.clk(clk), 
		.sys_reset(sys_reset)
	);

	initial begin
		#90
		forever #10 clk = ~clk;
	end
	
	initial begin
		#100
		forever begin
			#60 enable = ~enable;
			#20 enable = ~enable;
		end
	end
	
	initial begin
		// Initialize Inputs
		input_value = 0;
		enable = 0;
		start_timer = 0;
		clk = 0;
		sys_reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		input_value = 4'd2;
		start_timer = 1;
		
		#20
		start_timer = 0;
		
		#280
		input_value = 4'd4;
		start_timer = 1;

		#20
		start_timer = 0;
	end
      
endmodule

