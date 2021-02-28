`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:08:42 02/27/2021
// Design Name:   clk_devider
// Module Name:   /home/caillot/Documents/Autres/Projets/FPGA/LED_PWM/clk_devider_tb.v
// Project Name:  LED_PWM
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: clk_devider
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module clk_devider_tb;

	// Inputs
	reg clk_i;
	reg [15:0] devider_i;

	// Outputs
	wire clk_o;

	// Instantiate the Unit Under Test (UUT)
	clk_devider uut (
		.clk_i(clk_i), 
		.devider_i(devider_i), 
		.clk_o(clk_o)
	);

	initial begin
		// Initialize Inputs
		clk_i = 0;
		devider_i = 1;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		devider_i = 16'd10;
		#500;
		

	end
	
	always 
		#5 clk_i = ~clk_i;
      
endmodule

