`timescale 1ns / 1ps
module Encoder(Clk, Reset, x, Out, Start);
	// Inputs and Outputs
	input Clk, Reset, x, Start;
	output Out;
	
	wire Clk, Reset, x, Start;
	wire Out;
	
	// Internal Signals
	reg [5:0]state; // The 6 bits shift reg. used for scrambling
	wire xor1;
	wire Odd, Even;
	
	// Output register and Pointers to fill in and out
	reg [9:0]in; // This Signal shows the position of reg. which should be updated
	wire [9:0]next_in; // Each cycle two bits of OutReg should be updated.
							 // this is the second bit address which should be updated
	reg [1023:0]OutReg; // This Reg. is used as a queue for having serial output.
	
	assign next_in = in + 1'b1; // this is the second bit address which should be updated
	
	always @(posedge Clk) begin
		if(Reset || (!Start)) begin
			state <= 6'd0;
			OutReg <= 1024'd0;
			in <= 10'd0;
		end else begin
			state <= {x,state[5:1]};
			in <= next_in; // One per cycle increasing is enough due to shift right
			OutReg <= OutReg>>1; // All Bits of OutReg should be shifted right except two bits which is updated.
			OutReg[in] <= Even; // The proper positions of OutReg is updated
			OutReg[next_in] <= Odd;
		end
	end
		
	assign xor1 = state[0] ^ state[3] ^ state[4] ^ x;
	assign Odd = xor1 ^ state[5]; // Calculating Odd bit by 3 XORs
	assign Even = xor1 ^ state[1]; // Calculating Odd bit by 3 XORs
	
	assign Out = OutReg[0]; // The serial out bit is always the LSB of OutReg
	
endmodule
