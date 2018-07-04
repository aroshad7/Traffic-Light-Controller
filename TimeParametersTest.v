`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:19:44 07/04/2018
// Design Name:   TimeParameters
// Module Name:   C:/Users/Arosha/Desktop/HDL/Traffic_Controller_Project/TimeParametersTest.v
// Project Name:  Traffic_Controller_Project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: TimeParameters
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TimeParametersTest;

	// Inputs
	reg [1:0] selector;
	reg [3:0] reprogram_value;
	reg [1:0] interval_address;
	reg prg_sync_in;
	reg clk;
	reg sys_reset;

	// Outputs
	wire [3:0] output_value;

	// Instantiate the Unit Under Test (UUT)
	TimeParameters test (
		.selector(selector), 
		.reprogram_value(reprogram_value), 
		.interval_address(interval_address), 
		.prg_sync_in(prg_sync_in), 
		.output_value(output_value), 
		.clk(clk), 
		.sys_reset(sys_reset)
	);

	initial begin
		forever 
			#10 clk = ~clk;
	end

	initial begin
		// Initialize Inputs
		selector = 0;
		reprogram_value = 0;
		interval_address = 0;
		prg_sync_in = 0;
		clk = 0;
		sys_reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		sys_reset = 1;
		interval_address = 2'b00;
		
		#60
		sys_reset = 0;
		
		#60
		interval_address = 2'b01;
		
		#60
		interval_address = 2'b10;
		
		#60
		selector = 2'b01;
		reprogram_value = 4'b1010;
		
		#60
		prg_sync_in = 1;
		
		#20
		prg_sync_in = 0;
		
		#60
		interval_address = 2'b01;
		
		#60
		sys_reset = 1;
		interval_address = 2'b00;
		
		#60
		sys_reset = 0;
		
		#60
		interval_address = 2'b01;
		
		
		
	end
      
endmodule

