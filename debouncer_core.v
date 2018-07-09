`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:20:33 07/03/2018 
// Design Name: 
// Module Name:    debouncer_core 
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
module debouncer_core (reset, clk, noisy, clean);

   parameter DELAY = 500000;
   input reset, clk, noisy;
   output clean;

   reg [18:0] count;
   reg new, clean;

   always @(posedge clk)
     if (reset)
       begin
	  count <= 0;
	  new <= noisy;
	  clean <= noisy;
       end
     else if (noisy != new)
       begin
	  new <= noisy;
	  count <= 0;
       end
     else if (count == DELAY)
       clean <= new;
     else
       count <= count+1;
      
endmodule
