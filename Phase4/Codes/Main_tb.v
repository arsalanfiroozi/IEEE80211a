`timescale 1ns / 1ps
module Main_tb;

	// Inputs
	reg Clk;
	reg Reset;
	reg Start;
	reg TransFrame;

	// Outputs
	wire TranAntenna;
	wire RecFrame;
   wire Valid_Rec; 
   wire Valid_Tra; 
	wire RecAntenna;
	assign RecAntenna = TranAntenna && Valid_Tra;

	// Instantiate the Unit Under Test (UUT)
	Main uut (
		.Clk(Clk), 
		.Reset(Reset), 
		.Start(Start), 
		.TranAntenna(TranAntenna), 
		.RecAntenna(RecAntenna), 
		.TransFrame(TransFrame), 
		.RecFrame(RecFrame), 
		.Valid_Tra(Valid_Tra),
		.Valid_Rec(Valid_Rec), 
		.num_pads_rec(5'd18), 
		.num_pads_tra(5'd18)
	);
	
	always@(Clk)
		Clk <= #5 ~Clk;
	
	parameter N = 264;
	
	reg [0:0]InSignal[N:0];
	
	integer i,t, error;
	initial begin
		$readmemb("In.txt", InSignal);
		// Initialize Inputs
		Clk = 0;
		Reset = 1;
		error = 0;
		t=0;
		@(posedge Clk);
		for(i=0;t<N;i=i+1) begin
			TransFrame = InSignal[i];
			Start = 1'b1;
			Reset = 0;
			@(posedge Clk);
			if(Valid_Rec && RecFrame != InSignal[t]) begin
				error = error + 1;
				$display("Error, %d - Got: %d Shouldbe: %d \n", t, RecFrame, InSignal[t]);
			end
			if(Valid_Rec)
				t=t+1;
		end
		
		$display("Total Error in Main: %d \n", error);
		if(error == 0) 
			$display("No Error was found in Main!!!!!!!! \n ------------------------------ \n");
		
		$stop;
		
		Clk = 0;
		Reset = 0;
		error = 0;
		Start=0;
		t=0;
		@(posedge Clk);
		t=0;
		for(i=0;t<N;i=i+1) begin
			TransFrame = InSignal[i];
			Start = 1'b1;
			Reset = 0;
			@(posedge Clk);
			if(Valid_Rec && RecFrame != InSignal[t]) begin
				error = error + 1;
				$display("Error, %d - Got: %d Shouldbe: %d \n", t, RecFrame, InSignal[t]);
			end
			if(Valid_Rec)
				t=t+1;
		end
		
		$display("Total Error in Main: %d \n", error);
		if(error == 0) 
			$display("No Error was found in Main!!!!!!!! \n ------------------------------ \n");
		
		$stop;
	end
      
endmodule

