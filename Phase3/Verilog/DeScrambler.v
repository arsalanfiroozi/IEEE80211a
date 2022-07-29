`timescale 1ns / 1ps
module DeScrambler(Clk, Reset, x, y, Start);
	// Input and Outputs Signals
	input Clk, Reset, x, Start;
	output y;
	
	wire Clk, Reset, x;
	wire y;
	
	// Internal Signals
	reg [6:0]ShSeed; // The shift register used to scramble NOTE: This register is also used 
						  // in finding the initial seed due to resource sharing.
	reg [3:0]Counter;// State of the received bit
	reg f; // a Flag showing if the initial seed is detected or not
	wire z;
	
	assign z = ShSeed[6] ^ ShSeed[3];
	assign y = (Counter > 7'd6)?((Counter != 7'd7)?z ^ x:ShSeed[6] ^ ShSeed[3] ^ x):1'b0;
	
	always@(posedge Clk) begin
		if(Reset || (!Start)) begin
			ShSeed <= 7'd0;
			Counter <= 7'd0;
			f <= 1'b0;
		end else if(Start) begin
			if(f == 1'b1) begin // If Initial Seed is detected
				ShSeed <= {ShSeed[5:0], z}; // Shift and Update the shift register
			end else begin 
				ShSeed <= {ShSeed[5:0], x};
				if(Counter == 7'd7) begin // If 7 first bit is received, Initial Seed can be generated and descrambler 
												  // go on synchronous
					f <= 1'b1;
					ShSeed <= {ShSeed[5],ShSeed[4],ShSeed[3],ShSeed[2],ShSeed[1],ShSeed[0],ShSeed[6]^ShSeed[3]};
				end
				Counter <= Counter + 1'b1;
			end
		end
	end
	
endmodule
