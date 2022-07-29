`timescale 1ns / 1ps
module Interleaver_tb;

	// Inputs
	reg Clk;
	reg Reset;
	reg Start;
	reg x;

	// Outputs
	wire y;
	wire Valid;
	reg exp;

	// Instantiate the Unit Under Test (UUT)
	Interleaver uut (
		.Clk(Clk), 
		.Reset(Reset), 
		.Start(Start), 
		.x(x), 
		.y(y), 
		.Rate(4'b1101), 
		.Valid(Valid),
		.Ncbps()
	);
	always@(Clk)
		Clk <= #5 ~Clk;
	
	parameter N = 540;
	
	reg [0:0]InSignal[N-1:0];
	reg [0:0]OutSignal[N-1:0];
	integer i, j, error1;
	initial begin
		// Initialize Inputs
		$readmemb("Out_Encoder.txt", InSignal);
		$readmemb("Out_Interleaver.txt", OutSignal);
		Clk = 0;
		Reset = 0;
		error1 = 0;
		Start = 1'b0;
		j=0;
		@(posedge Clk);
		for(i=0;j<N;i=i+1) begin
			x = InSignal[i+12];
			Start = 1'b1;
			@(posedge Clk);
			if(Valid)
				j=j+1;
			exp = OutSignal[j+12-1]; 
			if(Valid && y != OutSignal[12+j-1]) begin
				error1 = error1 + 1;
				$display("i: %d ==> Out: %d Got %d \n", j, OutSignal[12+j-1], y);
			end
		end
		
      $display("Total Error in Interleaver: %d \n", error1);
		if(error1 == 0)
			$display("No Error was found in Interleaver. \n");
		$stop;

	end
      
endmodule
