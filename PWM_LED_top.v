`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:28:33 02/27/2021 
// Design Name: 
// Module Name:    PWM_LED_top 
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
module PWM_LED_top(
    input clk,
    input [7:0] switches,
    output LED
    );
	 
	 wire divided_clk;
	 reg [15:0] devider_i = 16'd744;	// 1000 - 256 = 744
	 
	 clk_devider divider_m (
		.clk_i(clk),
		.devider_i(devider_i), 
		.clk_o(divided_clk)
	 );
	 
	 PWM_generator PWM_m (
		.clk_i(divided_clk), 
		.duty_cycle(switches), 
		.pwm_o(LED)
	 );


endmodule
