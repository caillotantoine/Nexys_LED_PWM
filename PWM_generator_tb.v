`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:20:15 02/27/2021
// Design Name:   PWM_generator
// Module Name:   /home/caillot/Documents/Autres/Projets/FPGA/LED_PWM/PWM_generator_tb.v
// Project Name:  LED_PWM
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: PWM_generator
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module PWM_generator_tb;

	// Inputs
	reg clk_i;
	reg [7:0] duty_cycle;

	// Outputs
	wire pwm_o;

	// Instantiate the Unit Under Test (UUT)
	PWM_generator uut (
		.clk_i(clk_i), 
		.duty_cycle(duty_cycle), 
		.pwm_o(pwm_o)
	);

	initial begin
		// Initialize Inputs
		clk_i = 0;
		duty_cycle = 0;

		// Wait 100 ns for global reset to finish
		#5000;
        
		// Add stimulus here
		duty_cycle = 8'd128;
		#5000;
		
		duty_cycle = 8'd200;
		#5000;
		
		duty_cycle = 8'd50;
		#5000;
		
		duty_cycle = 8'd255;
		#5000;
		
		duty_cycle = 8'd100;
		#5000;
		
		duty_cycle = 8'd0;
		#5000;
		
	end
	
	always
		#1 clk_i = ~clk_i;
      
endmodule

