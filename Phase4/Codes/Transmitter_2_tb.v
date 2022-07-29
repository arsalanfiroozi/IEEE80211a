`timescale 1ns / 1ps
module Transmitter_2_tb;

	// Inputs
	reg Clk;
	reg Reset;
	reg Start;
	reg x;

	// Outputs
	wire y;
	wire y0, y1;
	assign y0 = uut.y0;
	assign y1 = uut.y1;
	wire Valid;

	// Instantiate the Unit Under Test (UUT)
	Transmitter_2 uut (
		.Clk(Clk), 
		.Reset(Reset), 
		.Start(Start), 
		.x(x), 
		.y(y), 
		.Valid(Valid),
		.num_pads(5'd18)
	);
	
	always@(Clk)
		Clk <= #5 ~Clk;
	
	parameter N = 276;
	
	reg [0:0]InSignal[N-1-12:0];
	reg [0:0]OutSignal[N-1:0];
	reg [0:0]OutSignal2[2*N-1:0];
	reg [0:0]OutSignal3[2*N-1:0];
	integer i, error1, error2, error3, tt, qq;
	initial begin
		// Initialize Inputs
		$readmemb("In.txt", InSignal);
		$readmemb("Out_Scramble.txt", OutSignal);
		$readmemb("Out_Encoder.txt", OutSignal2);
		$readmemb("Out_Interleaver.txt", OutSignal3);
		Clk = 0;
		Reset = 1;
		error1 = 0;
		error2 = 0;
		error3 = 0;
		tt=0;
		qq=0;
		Start = 1'b0;
		@(posedge Clk);
		for(i=0;qq<540;i=i+1) begin
			x = InSignal[i];
			Start = 1'b1;
			Reset = 0;
			@(posedge Clk);
			if(y0 != OutSignal[12 + i]) begin
				error1 = error1 + 1;
				$display("1: %d \n", i);
			end
			if(uut.Valid_Encoder && y1 != OutSignal2[12 + tt]) begin
				error2 = error2 + 1;
				$display("2: %d \n", tt);
			end
			if(uut.Valid_Encoder)
				tt=tt+1;
			if(Valid && y != OutSignal3[qq]) begin
				error3 = error3 + 1;
				$display("3: %d \n", qq);
			end
			if(Valid)
				qq=qq+1;
		end
			
      $display("Total Error in Scrambler: %d \n", error1);
		if(error1 == 0) 
			$display("No Error was found in Scrambler. \n ------------------------------ \n");
		
      $display("Total Error in Encoder: %d \n", error2);
		if(error2 == 0) 
			$display("No Error was found in Encoder. \n ------------------------------ \n");
		
      $display("Total Error in Interleaver: %d \n", error3);
		if(error3 == 0) 
			$display("No Error was found in Interleaver. \n ------------------------------ \n");
		$stop;
		
		tt=0;
		qq=0;
		for(i=0;qq<540;i=i+1) begin
			x = InSignal[i];
			Start = 1'b1;
			Reset = 0;
			@(posedge Clk);
			if(y0 != OutSignal[12 + i]) begin
				error1 = error1 + 1;
				$display("1: %d \n", i);
			end
			if(uut.Valid_Encoder && y1 != OutSignal2[12 + tt]) begin
				error2 = error2 + 1;
				$display("2: %d \n", tt);
			end
			if(uut.Valid_Encoder)
				tt=tt+1;
			if(Valid && y != OutSignal3[qq]) begin
				error3 = error3 + 1;
				$display("3: %d \n", qq);
			end
			if(Valid)
				qq=qq+1;
		end
			
      $display("Total Error in Scrambler: %d \n", error1);
		if(error1 == 0) 
			$display("No Error was found in Scrambler. \n ------------------------------ \n");
		
      $display("Total Error in Encoder: %d \n", error2);
		if(error2 == 0) 
			$display("No Error was found in Encoder. \n ------------------------------ \n");
		
      $display("Total Error in Interleaver: %d \n", error3);
		if(error3 == 0) 
			$display("No Error was found in Interleaver. \n ------------------------------ \n");
		$stop;

	end
      
endmodule

