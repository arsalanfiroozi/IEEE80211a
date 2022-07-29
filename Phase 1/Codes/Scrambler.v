`timescale 1ns / 1ps
module Scrambler(Clk, Reset, Start, Seed, x, y);
	// Input and Outputs Signals
	input Clk, Reset, Start, x;
	input [6:0]Seed;
	output y;
	
	wire Clk, Reset, x;
	wire [6:0]Seed;
	wire y;
	
	// Internal Signals
	reg [6:0]ShSeed;
	wire z;
	
	assign z = ShSeed[6] ^ ShSeed[3];
	assign y = z ^ x;
	
	always@(posedge Clk) begin
		if(Reset || (!Start)) begin
			ShSeed <= Seed;
		end else if(Start) begin
			ShSeed <= {ShSeed[5:0], z};
		end
	end
	
endmodule
