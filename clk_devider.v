`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:30:13 02/27/2021 
// Design Name: 
// Module Name:    clk_devider 
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
module clk_devider(
    input clk_i,
    input [15:0] devider_i,
    output reg clk_o = 1'b0
    );
	 
	 reg [15:0] counter = 0;
	 
	 always @(posedge clk_i) begin
		if (counter >= devider_i-1) begin
			counter <= 0;
			clk_o <= ~clk_o;
		end else begin
			counter <= counter + 1;
		end
	 end
	 
endmodule
