`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:45:26 07/03/2018 
// Design Name: 
// Module Name:    Timer 
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
module Timer(input_value, enable, start_timer, expired, divider_reset, clk, sys_reset);
	 
	input[3:0] input_value;
   input enable, start_timer, clk, sys_reset;
	output expired, divider_reset;
	
	reg expired, divider_reset;
	reg remaining_time;
	
	always @ (posedge clk)
		begin
			
			expired <= 0;
			divider_reset <= 0;
			
			if(sys_reset)
				begin
					divider_reset <= 1;
					expired <= 0;
					remaining_time <= 0;
				end
			
			else if(start_timer)
				begin
					divider_reset <= 1;
					remaining_time <= input_value;
				end
				
			else if(enable)
				begin
					expired <= (remaining_time == 4'd1);
					remaining_time <= remaining_time - 1;
				end
		
		end
		
endmodule
