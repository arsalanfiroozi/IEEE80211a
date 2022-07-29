`timescale 1ns / 1ps
module Receiver_2_tb;

	// Inputs
	reg Clk;
	reg Reset;
	reg x;

	// Outputs
	wire y;
	wire Valid;
	
	wire y0;
	assign y0 = uut.y0;

	// Instantiate the Unit Under Test (UUT)
	Receiver_2 uut (
		.Clk(Clk), 
		.Reset(Reset), 
		.x(x), 
		.y(y), 
		.Valid(Valid), 
		.num_pads(5'd18)
	);
	
	always@(Clk)
		Clk <= #5 ~Clk;
	
	parameter N = 276;
	
	reg [0:0]InSignal[2*N-1:0];
	reg [0:0]OutSignal3[N-1:0];
	integer i, error1, error2, error3, tt, qq;

	initial begin
		// Initialize Inputs
		$readmemb("Out_Interleaver.txt", InSignal);
		$readmemb("In.txt", OutSignal3);
		// Initialize Inputs
		Clk = 0;
		Reset = 1;
		x = 0;
		tt=0;
		qq=0;
		error1 = 0;
		error2 = 0;
		error3 = 0;
		@(posedge Clk);
		
		for(i=0;qq<264;i=i+1) begin
			x = InSignal[i];
			Reset = 0;
			@(posedge Clk);
			if(Valid && y != OutSignal3[qq]) begin
				error3 = error3 + 1;
				$display("3: %d \n", qq);
			end
			if(Valid)
				qq=qq+1;
		end
		
      $display("Total Error in Receiver: %d \n", error3);
		if(error3 == 0) 
			$display("No Error was found in Receiver. \n ------------------------------ \n");
		$stop;
      
		qq=0;
		error1 = 0;
		error2 = 0;
		error3 = 0;
		for(i=0;qq<264;i=i+1) begin
			x = InSignal[i];
			Reset = 0;
			@(posedge Clk);
			if(Valid && y != OutSignal3[qq]) begin
				error3 = error3 + 1;
				$display("3: %d \n", qq);
			end
			if(Valid)
				qq=qq+1;
		end
		
      $display("Total Error in Receiver: %d \n", error3);
		if(error3 == 0) 
			$display("No Error was found in Receiver. \n ------------------------------ \n");
		$stop;
		
	end
      
endmodule

