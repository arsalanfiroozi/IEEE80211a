`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:01:03 06/16/2021
// Design Name:   Encoder
// Module Name:   D:/HW/FPGA/Project/Phase2/Verilog/Encoder_tb.v
// Project Name:  Phase2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Encoder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Encoder_tb;

	// Inputs
	reg Clk;
	reg Reset;
	reg x;
	reg Start;

	// Outputs
	wire Out;

	// Instantiate the Unit Under Test (UUT)
	Encoder uut (
		.Clk(Clk), 
		.Reset(Reset), 
		.x(x), 
		.Out(Out),
		.Start(Start)
	);

	always@(Clk)
		Clk <= #5 ~Clk;
	
	parameter N = 276;
	
	reg [0:0]InSignal[N-1:0];
	reg [0:0]OutSignal[2*N-1:0];
	integer i, error1;
	initial begin
		// Initialize Inputs
		$readmemb("Out_Scramble.txt", InSignal);
		$readmemb("Out_Encoder.txt", OutSignal);
		Clk = 0;
		Reset = 0;
		error1 = 0;
		Start = 1'b0;
		@(posedge Clk);
		for(i=0;i<2*N;i=i+1) begin
			x = InSignal[i];
			Start = 1'b1;
			@(posedge Clk);
			if(Out != OutSignal[i-1]) begin
				error1 = error1 + 1;
				$display("i: %d ==> Out: %d Got %d \n", i, OutSignal[i-1], Out);
			end
		end
			
      $display("Total Error in Encoder: %d \n", error1);
		if(error1 == 0)
			$display("No Error was found in Encoder. \n");
		$stop;

	end
      
endmodule
