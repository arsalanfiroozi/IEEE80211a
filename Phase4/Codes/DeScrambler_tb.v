`timescale 1ns / 1ps
module DeScrambler_tb;

	// Inputs
	reg Clk;
	reg Reset;
	reg x;

	// Outputs
	wire y;

	// Instantiate the Unit Under Test (UUT)
	Receiver uut (
		.Clk(Clk), 
		.Reset(Reset), 
		.x(x), 
		.y(y),
		.num_pads(3'b1)
	);
	
	always@(Clk)
		Clk <= #5 ~Clk;
	
	parameter N = 276; 
	
	reg [0:0]InSignal[N-1:0];
	reg [0:0]OutSignal[N-1-12:0];
	integer i, error1, error2;
	initial begin
		// Initialize Inputs
		$readmemb("Out_Scramble.txt", InSignal);
		$readmemb("In.txt", OutSignal);
		Clk = 0;
		Reset = 0;
		error1 = 0;
		error2 = 0;
		@(posedge Clk);
		Reset = 1;
		@(posedge Clk);
		for(i=0;i<=N;i=i+1) begin
			x = InSignal[i];
			Reset = 0;
			@(posedge Clk);
			if(i>13 && y != OutSignal[i-13]) begin
				error1 = error1 + 1;
			end
		end
			
      $display("Total Error in DeScrambler: %d \n", error1);
		if(error1 == 0) 
			$display("No Error was found in DeScrambler. \n");
		$stop;

	end
      
endmodule

