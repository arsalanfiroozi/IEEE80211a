`timescale 1ns / 1ps
module Scrambler_tb;

	// Inputs
	reg Clk;
	reg Reset;
	reg x;
	reg Enable;

	// Outputs
	wire y;

	// Instantiate the Unit Under Test (UUT)
	Transmitter uut (
		.Clk(Clk), 
		.Reset(Reset), 
		.x(x), 
		.y(y),
		.Enable(Enable)
	);
	
	always@(Clk)
		Clk <= #5 ~Clk;
	
	parameter N = 276;
	
	reg [0:0]InSignal[N-1-12:0];
	reg [0:0]OutSignal[N-1:0];
	integer i, error1, error2;
	initial begin
		// Initialize Inputs
		$readmemb("In.txt", InSignal);
		$readmemb("Out_Scramble.txt", OutSignal);
		Clk = 0;
		Reset = 0;
		error1 = 0;
		error2 = 0;
		Enable = 1'b0;
		@(posedge Clk);
		for(i=0;i<N;i=i+1) begin
			x = InSignal[i];
			Enable = 1'b1;
			@(posedge Clk);
			if(y != OutSignal[i]) begin
				error1 = error1 + 1;
				$display("%d \n", i);
			end
		end
			
      $display("Total Error in Scrambler: %d \n", error1);
		if(error1 == 0) 
			$display("No Error was found in Scrambler. \n");
		$stop;

	end
      
endmodule

