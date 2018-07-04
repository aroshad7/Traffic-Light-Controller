`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:51:04 07/03/2018 
// Design Name: 
// Module Name:    FSM 
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
module FSM(sensor_sync_in, walkRegister_status, prg_sync_in, expired, walkRegister_reset, interval_address, start_timer, light_signals, clk, sys_reset);
	input sensor_sync_in, walkRegister_status, prg_sync_in, expired, clk, sys_reset;
	output walkRegister_reset, start_timer;
	output[6:0] light_signals;
	output[0:2] interval_address;
	
	reg walkRegister_reset, start_timer;
	reg[6:0] light_signals;
	reg[0:2] interval_address;
	reg[2:0] state;
	
	parameter START_MAIN_GREEN = 0;
	parameter CONT_MAIN_GREEN_NO_TRAFFIC = 1;
	parameter CONT_MAIN_GREEN_TRAFFIC = 2;
	parameter MAIN_YELLOW = 3;
	parameter PEDESTRIAN_WALK = 4;
	parameter START_SIDE_GREEN = 5;
	parameter CONT_SIDE_GREEN_TRAFFIC = 6;
	parameter SIDE_YELLOW = 7;

	parameter BASE_ADD = 2'b00 ;
	parameter EXT_ADD = 2'b01 ;
	parameter YEL_ADD = 2'b10 ;
	
	always @ ( posedge clk )
	begin
	
		start_timer <= 0;						//Check what to use ---- <= or = 
		walkRegister_reset <= 0;

		if ( sys_reset || prg_sync_in )
			begin
			start_timer <= 1;
			interval_address <= BASE_ADD ;
			state <= START_MAIN_GREEN ;
			end
			
		else if (~ expired )
			begin
			case ( state )
				START_MAIN_GREEN, CONT_MAIN_GREEN_NO_TRAFFIC, CONT_MAIN_GREEN_TRAFFIC :
					light_signals <= 7'b001_100_0;	//Rm, Ym, Gm, Rs, Ys, Gs, W
					//{ mainLight , sideLight , walkLight } <= { GREEN , RED , OFF };
				MAIN_YELLOW :
					light_signals <= 7'b010_100_0;	//Rm, Ym, Gm, Rs, Ys, Gs, W
					//{ mainLight , sideLight , walkLight } <= { YELLOW , RED , OFF };

				PEDESTRIAN_WALK :
					light_signals <= 7'b100_100_1;	//Rm, Ym, Gm, Rs, Ys, Gs, W
					//{ mainLight , sideLight , walkLight } <= { RED , RED , ON };

				START_SIDE_GREEN, CONT_SIDE_GREEN_TRAFFIC :
					light_signals <= 7'b100_001_0;	//Rm, Ym, Gm, Rs, Ys, Gs, W
					//{ mainLight , sideLight , walkLight } <= { RED , GREEN , OFF };

				SIDE_YELLOW :
					light_signals <= 7'b100_010_0;	//Rm, Ym, Gm, Rs, Ys, Gs, W
					//{ mainLight , sideLight , walkLight } <= { RED , YELLOW , OFF };

			endcase
			end
		
		else
			begin
			
			start_timer <= 1;

			case ( state )
				START_MAIN_GREEN :
					begin
						if ( sensor_sync_in )
							begin
								interval_address <= EXT_ADD ;
								state <= CONT_MAIN_GREEN_TRAFFIC ;
							end
						else
							begin
								interval_address <= BASE_ADD ;
								state <= CONT_MAIN_GREEN_NO_TRAFFIC ;
							end
					end

				CONT_MAIN_GREEN_NO_TRAFFIC,CONT_MAIN_GREEN_TRAFFIC :
					begin
						interval_address <= YEL_ADD ;
						state <= MAIN_YELLOW ;
					end

				MAIN_YELLOW :
					begin
						if ( walkRegister_status )
							begin
								interval_address <= EXT_ADD ;
								state <= PEDESTRIAN_WALK ;
							end
						else
							begin
								interval_address <= BASE_ADD ;
								state <= START_SIDE_GREEN ;
							end
					end

				PEDESTRIAN_WALK :
					begin
						interval_address <= BASE_ADD ;
						state <= START_SIDE_GREEN ;
						walkRegister_reset <= 1;
					end

				START_SIDE_GREEN :
					begin
						if ( sensor_sync_in )
							begin
								interval_address <= EXT_ADD ;
								state <= CONT_SIDE_GREEN_TRAFFIC ;
							end
						else
							begin
								interval_address <= YEL_ADD ;
								state <= SIDE_YELLOW ;

							end
					end

				CONT_SIDE_GREEN_TRAFFIC :
					begin
						interval_address <= YEL_ADD ;
						state <= SIDE_YELLOW ;
					end

				SIDE_YELLOW :
					begin
						interval_address <= BASE_ADD ;
						state <= START_MAIN_GREEN ;
					end

			endcase
			end
			
	end
	
endmodule
