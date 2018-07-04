`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:11:04 07/03/2018 
// Design Name: 
// Module Name:    TimeParameters 
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
module TimeParameters(selector, reprogram_value, interval_address, prg_sync_in, output_value, clk, sys_reset);
	 
	input[1:0] selector;
	input[3:0] reprogram_value;
	input[1:0] interval_address;
	input prg_sync_in, clk, sys_reset;
	output[3:0] output_value;
	
	reg[3:0] output_value;
	
	parameter BASE_ADD = 2'b00;
	parameter EXTD_ADD = 2'b01;
	parameter YELL_ADD = 2'b10;
	
	parameter BASE_DEFAULT = 4'd6;
	parameter EXTD_DEFAULT = 4'd3;
	parameter YELL_DEFAULT = 4'd2;
	
	reg[3:0] BASE_VALUE = BASE_DEFAULT;
	reg[3:0] EXTD_VALUE = EXTD_DEFAULT;
	reg[3:0] YELL_VALUE = YELL_DEFAULT;
		

	always @ (posedge clk)
	begin
		if(sys_reset)
			begin
				BASE_VALUE = BASE_DEFAULT;
				EXTD_VALUE = EXTD_DEFAULT;
				YELL_VALUE = YELL_DEFAULT;
			end
			
		else if(prg_sync_in)
			begin
			
				case(selector)
				
					BASE_ADD: BASE_VALUE = (reprogram_value !== 4'd0) ? reprogram_value : BASE_DEFAULT;
					EXTD_ADD: EXTD_VALUE = (reprogram_value !== 4'd0) ? reprogram_value : EXTD_DEFAULT;
					YELL_ADD: YELL_VALUE = (reprogram_value !== 4'd0) ? reprogram_value : YELL_DEFAULT;
					
					default:														//Set all to default values if the selector is in an undefined state
						begin
							BASE_VALUE = BASE_DEFAULT;			
							EXTD_VALUE = EXTD_DEFAULT;
							YELL_VALUE = YELL_DEFAULT;
						end
				endcase
				
			end
			
		else
			begin
			
				case(interval_address)
					BASE_ADD: output_value <= BASE_VALUE;
					EXTD_ADD: output_value <= EXTD_VALUE;
					YELL_ADD: output_value <= YELL_VALUE;
				
					default:
						output_value <= 4'd15;										//Send the maximum time to the timer in an undefined state. Then the timer will not expire quickly. So the FSM will be stable.
				endcase																	
			
			end
	end
	
endmodule
