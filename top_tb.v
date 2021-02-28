`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:05:00 02/27/2021
// Design Name:   PWM_LED_top
// Module Name:   /home/caillot/Documents/Autres/Projets/FPGA/LED_PWM/top_tb.v
// Project Name:  LED_PWM
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: PWM_LED_top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module top_tb;

	// Inputs
	reg clk;
	reg [7:0] switches;

	// Outputs
	wire LED;

	// Instantiate the Unit Under Test (UUT)
	PWM_LED_top uut (
		.clk(clk), 
		.switches(switches), 
		.LED(LED)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		switches = 8'd128;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	
	always 
		#1 clk = ~clk;
      
endmodule

