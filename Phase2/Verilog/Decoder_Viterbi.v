`timescale 1ns / 1ps
module Decoder_Viterbi(Clk, Reset, x, Out, Start, Valid, Length);
	parameter frame = 512;  // Number of Bits wants to be decoded after each Start pulse
	parameter cost_Length = $clog2(frame*2); // Maximum of cost = Number of iterations * 2
	parameter cntlength = $clog2(frame);
	
	//Inputs and Outputs
	input Clk, Reset, x, Start;
	input [8:0]Length; // Length Indicates number of bits to be decoded
	output Out;
	output Valid; // Outputs are only valid if Valid is set
	
	wire Clk, Reset, x, Start;
	wire [8:0]Length; 
	wire Out; 
	wire Valid;
	
	//Internal Signals 
	reg [1:0]TotalControl; // Control the State of Hardware: State 0: Calculate Paths and Cost State 1: Find the minimum 
								  // Path and fill the out register State 2: each bits of Out Reg. can be seen serially in output
	reg [cntlength:0]Counter1; // Used for determining the inner state of the TotalControl state
	reg flag; // Used to ignore first Valid_i zero level
	reg [1:0]In; // Used because of even and odd bits should be processed once a cycle
	reg Valid_i; // This signal has Fclk/2 and is used to stall processing once in 2 cycles
	reg [frame-1:0]OutReg; // This Register is filled in state1 and each bit is serially the output in state2
	
	wire val;
	assign val = (flag && Valid_i==1'd0); // This flag is used to stall processing once in 2 cycles
	
	// Rams
	reg [cost_Length-1:0]Cost[63:0]; // Cost Reg. is used to have the num. of errors in the last iteration
	reg [cost_Length-1:0]Cost_Next[63:0]; // A Combinational Circuit determines the next cost values of Cost Reg.
	reg [5:0]Paths[63:0][frame-1:0]; // This RAM is used to save the paths with the least cost per each iteration
	reg [5:0]Paths_Next[63:0]; // A combinational circuit determines the next values of the processing iteration
	
	reg [5:0]state, state1, state2; 
	reg xor1, odd1, even1, xor2, odd2, even2;
	reg [1:0]cost1, cost2;
	reg [cost_Length-1:0]scost1, scost2;
	always@(*) begin // This Combinational logic fill the cost and path as described in the comments of commands
		for(i=0;i<64;i=i+1) begin 
			state = i[5:0];
			state1 = {state[4:0],1'b1}; // the first next possible state
			state2 = {state[4:0],1'b0}; // the second next possible state
			
			xor1 = state1[0] ^ state1[3] ^ state1[4] ^ state[5];
			odd1 = xor1 ^ state1[5]; // The first pair of possible encoder output
			even1 = xor1 ^ state1[1]; // The second pair of possible encoder output
			xor2 = state2[0] ^ state2[3] ^ state2[4] ^ state[5];
			odd2 = xor2 ^ state2[5]; // The first pair of possible encoder output
			even2 = xor2 ^ state2[1]; // The second pair of possible encoder output
			 
			cost1 = {even1,odd1} ^ In;
			cost2 = {even2,odd2} ^ In;
			scost1 = cost1[1] + cost1[0] + Cost[state1]; // Num. of errors if first possible state is selected
			scost2 = cost2[1] + cost2[0] + Cost[state2]; // Num. of errors if second possible state is selected
			
			if(scost1<scost2) begin // Decide which possible state gives better error and fill the Rams properly
				 Cost_Next[state] = scost1;
				 Paths_Next[state] = state1;
			end else begin
				 Cost_Next[state] = scost2;
				 Paths_Next[state] = state2;
			end
		end
	end
	
	reg [5:0]minState; // This is the ouput of below Combinational logic, indicating the minimum state of the last iteration
	reg [cost_Length-1:0]minval;
	integer k1;
	always@(*) begin // This Logic simply determine the least value in the Cost Reg.
		minState = 6'd0;
		minval = Cost[0];
		for(k1=0;k1<64;k1=k1+1) begin
			if(minval > Cost[k1]) begin
				minval = Cost[k1];
				minState = k1[5:0];
			end
		end
	end
	
	integer i,j;
	integer i2,i3,j4;
	reg [5:0]StateScan;
	always @(posedge Clk) begin 
		if(Reset || (!Start)) begin
			TotalControl <= 2'd0;
			In <= 2'd0; // Used because of even and odd bits should be processed once a cycle
			flag <= 1'd0; // Used to ignore first Valid_i zero level
			Valid_i <= 1'b0;
			for(i2=0;i2<64;i2=i2+1) begin
				Cost[i2] <= {cost_Length{1'b0}};
			end
			Counter1 <= {cntlength{1'b0}};
		end else begin
			In <= {In[0], x}; // Used because of even and odd bits should be processed once a cycle
			Valid_i <= ~Valid_i; 
			flag <= (Valid_i==1'b0)?1'b1:flag; // Used to ignore first Valid_i zero level
			
			if(val && TotalControl == 2'd0) begin // State 0: Calculate Paths and Cost
				for(i3=0;i3<64;i3=i3+1) begin 
					Cost[i3] <= Cost_Next[i3];
				end
				for(j4=0;j4<64;j4=j4+1) // Counter1 selects which regs in this iteration should be filled
					Paths[j4[5:0]][Counter1[cntlength-1:0]] <= Paths_Next[j4];
				if(Counter1==Length-1'b1) begin // This State is finished when all the frame bits are received
					TotalControl <= 2'd1;
				end
				Counter1 <= Counter1 + 1'b1;
			end else if(TotalControl == 2'd1) begin // State 1: Find the minimum Path and fill out the register
				OutReg[Counter1] <= StateScan[5]; // The MSB of best states indicates the most possible output
				if(Counter1 == Length)
					StateScan <= minState; // in the first cycle of this total state, the state is the minimum state of cost Reg.
				else
					StateScan <= Paths[StateScan[5:0]][Counter1[cntlength-1:0]]; // the best state refers to the before optimum state
				if(Counter1 == 10'd0) // This State is finished when all output bits are found
					TotalControl <= 2'd2;
				else
					Counter1 <= Counter1 - 1'b1;
			end else if(TotalControl == 2'd2) begin // In this state OutReg shifts to right so that the LSB is serially all outputs
				OutReg <= OutReg >> 1;
			end
		end
	end
	
	assign Out = OutReg[0]; // OutReg shifts to right so that the LSB is serially all outputs
	assign Valid = TotalControl == 2'd2; // Output is only valid when the state is 2
	
endmodule
