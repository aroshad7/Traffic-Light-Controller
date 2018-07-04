`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:20:52 07/04/2018
// Design Name:   WalkRegister
// Module Name:   C:/Users/Arosha/Desktop/HDL/Traffic_Controller_Project/WlakRegisterTest.v
// Project Name:  Traffic_Controller_Project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: WalkRegister
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module WlakRegisterTest;

	// Inputs
	reg walkRequest_in;
	reg clk;
	reg walkRegister_reset;
	reg sys_reset;

	// Outputs
	wire walkRegister_status;

	// Instantiate the Unit Under Test (UUT)
	WalkRegister test (
		.walkRequest_in(walkRequest_in), 
		.walkRegister_status(walkRegister_status), 
		.clk(clk), 
		.walkRegister_reset(walkRegister_reset), 
		.sys_reset(sys_reset)
	);

	initial begin 
		forever #10 clk = ~clk;
	end

	initial begin
		// Initialize Inputs
		walkRequest_in = 0;
		clk = 0;
		walkRegister_reset = 0;
		sys_reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
  
  
		$display("Starting test of WalkRegister ...");

		// clear the counter
		walkRegister_reset = 1;
		#100
		if(walkRegister_status !== 0) begin
			$display("reset should trigger pendingWalk == 0");
			//$stop();
		end

		// does it stay clear when button pushed ?
		walkRequest_in = 1;
		#100
		if(walkRegister_status !== 0) begin
			$display("reset == 1 overrides pendingWalk == 1");
			//$stop();
		end

		// un - reset , push button
		walkRegister_reset = 0;
		walkRequest_in = 1;
		#100
		if(walkRegister_status !== 1) begin
			$display ("walkPush but no pendingWalk!");
			//$stop();
		end

		// does it stay 1?
		walkRequest_in = 0;
		#100
		if(walkRegister_status !== 1) begin
			$display("walkPush shouldn't need to stay 1 for pendingWalk == 1");
			//$stop();
		end

		// clear it
		walkRegister_reset = 1;
		#100
		if(walkRegister_status !== 0) begin
			$display("reset but pendingWalk == 1");
			//$stop();
		end

		$display (" Passed test of WalkRegister ... ");
	end
      
endmodule

