`timescale 1ns / 1ps

module Decoder_Viterbi_tb;

	// Inputs
	reg Clk;
	reg Reset;
	reg x;
	reg Start;

	// Outputs
	wire Out;
	wire valid; 
	
	reg exp;

	// Instantiate the Unit Under Test (UUT)
	Decoder_Viterbi uut (
		.Clk(Clk), 
		.Reset(Reset), 
		.x(x), 
		.Out(Out), 
		.Start(Start),
		.Valid(valid),
		.Length(9'd276)
	);

	always@(Clk)
		Clk <= #5 ~Clk;
	
	reg [0:0]InSignal[551:0];
	reg [0:0]OutSignal[275:0];
	integer i, error1, ind, j;
	initial begin
		// Initialize Inputs
		$readmemb("Out_Encoder.txt", InSignal);
		$readmemb("Out_DeCoder2.txt", OutSignal);
		Clk = 0;
		Reset = 0;
		error1 = 0;
		Start = 1'b0;
		ind = 0;
		j=0;
		@(posedge Clk);
		for(i=0;ind<276;i=i+1) begin 
			if(i>=551)
				x = 0;
			else
				x = InSignal[i];
			Start = 1'b1;
			@(posedge Clk);
			exp = OutSignal[ind];
			if(valid==1'b1 && i>1 && Out != OutSignal[ind]) begin
				error1 = error1 + 1;
				$display("i: %d ind: %d ==> Out: %d Got %d \n", i, ind, OutSignal[ind], Out);
			end 
			if(valid==1'b1 && i>1) 
				ind = ind + 1;
		end
			
      $display("Total Error in Encoder: %d \n", error1);
		if(error1 == 0)
			$display("No Error was found in Encoder. \n");
		$stop;

	end
      
endmodule
