`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:48:56 02/27/2021 
// Design Name: 
// Module Name:    PWM_generator 
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
module PWM_generator(
    input clk_i,
    input [7:0] duty_cycle,
    output reg pwm_o = 1'b0
    );

	reg [7:0] pwm_cnt = 0;
	
	always @(posedge clk_i) begin
		if (pwm_cnt < duty_cycle) begin
			pwm_o <= 1'b1;
		end else begin 
			pwm_o <= 1'b0;
		end
		pwm_cnt <= pwm_cnt + 1;
		if (pwm_cnt == 8'b11111111) begin
			pwm_cnt <= 8'b00000000;
		end
	end

endmodule
