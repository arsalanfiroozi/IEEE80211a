`timescale 1ns / 1ps
module Interleaver(Clk, Reset, Start, x, y, Rate, Valid, Ncbps);
	// Inputs and Outputs
	input Clk, Reset, Start, x;
	input [3:0]Rate; // Used to indicate Ncbps and Nbpsc from LUT
	output y, Valid; // Valid shows if the output bit is valid
	output [8:0]Ncbps; // This signal is the result of LUT by the given Rate. Max: 288
	
	wire Clk, Reset, Start, x;
	wire [3:0]Rate;
	reg [8:0]Ncbps;
	wire y;
	reg Valid;
	
	// Internal Signals
	reg [287:0]Out1, Out2; // Two series of Registers are used. The first one is used to save information while
								  // the new position of bits are calculated.
								  // The second one is used to make the design pipelined. While the second one is being
								  // shifted and detemine the valid output of this module, the first one is filled.
								  // The second one is shifted while calculating and filled when calculation is completed.
	wire [8:0]i,t; // The i index shows the position after the first permutation
	reg [8:0]j; // The j index shows the position after the second permutation. This index shows which bit should be
					// filled.
	wire [15:0]tp; // This signal is the equivalent value of 16 x i / Ncbps x 2^8
	wire [1:0]s; // This signal is used for s = max{1, Nbpsc/2}
	wire [2:0]t_imod3, t_tmod3; // These two lines used to cal. an equivalent value of (mod 3)
	wire [1:0]imod3, tmod3;
	reg [2:0]Nbpsc; // This signal is the result of LUT by the given Rate. Max: 6
	reg [6:0]Ti; // This signal is the equivalent value of 16 / Ncbps x 2^8 ==> This signal is used for calculating
					 // tp.
	reg [8:0]Counter; // This state shows the n-th bit position of the block size of Ncbps
	
	// This LUT determines the Ncbps, Nbpsc, Ti(the equivalent value of 16 / Ncbps x 2^8)
	always @(Rate) begin
		case(Rate)
			4'b1101: begin // 6 Mbits/S
				Ncbps = 9'd48;
				Nbpsc = 3'd1;
				Ti = 7'd85;
			end
			4'b1111: begin // 9 Mbits/S
				Ncbps = 9'd48;
				Nbpsc = 3'd1;
				Ti = 7'd85;
			end
			4'b0101: begin // 12 Mbits/S
				Ncbps = 9'd96;
				Nbpsc = 3'd2;
				Ti = 7'd42;
			end
			4'b0111: begin // 18 Mbits/S
				Ncbps = 9'd96;
				Nbpsc = 3'd2;
				Ti = 7'd42;
			end
			4'b1001: begin // 24 Mbits/S
				Ncbps = 9'd192;
				Nbpsc = 3'd4;
				Ti = 7'd21;
			end
			4'b1011: begin // 36 Mbits/S
				Ncbps = 9'd192;
				Nbpsc = 3'd4;
				Ti = 7'd21;
			end
			4'b0001: begin // 48 Mbits/S
				Ncbps = 9'd288;
				Nbpsc = 3'd6;
				Ti = 7'd14;
			end
			4'b0011: begin // 54 Mbits/S
				Ncbps = 9'd288;
				Nbpsc = 3'd6;
				Ti = 7'd14;
			end
			default: begin 
				Ncbps = 9'dx;
				Nbpsc = 3'dx;
				Ti = 7'dx;
			end
		endcase
	end
	
	// Combinational Logic
	assign s = (!(|Nbpsc[2:1]))?1'b1:Nbpsc[2:1]; // s = max{1, Nbpsc/2}
	assign i = Ncbps[8:4]*Counter[3:0] + Counter[8:4]; // i = (Ncbps / 16)(Counter mod 16) + floor(Counter / 16)
	assign tp = i * Ti; // 16 x i / Ncbps * 2^8
	assign t = Ncbps + i - tp[15:8]; // i + Ncbps - floor(16 * i / Ncbps)
	assign t_imod3 = i[0] - i[1] + i[2] - i[3] + i[4] - i[5] + i[6] - i[7] + i[8]; // These two lines cal. an equivalent 
	assign imod3 = (&t_imod3[1:0])?2'd0:t_imod3[1:0];										 // value of (i mod 3)
	assign t_tmod3 = t[0] - t[1] + t[2] - t[3] + t[4] - t[5] + t[6] - t[7] + t[8]; // These two lines cal. an equivalent 
	assign tmod3 = (&t_tmod3[1:0])?2'd0:t_tmod3[1:0];										 // value of (t mod 3)
	
	
	always @(s,i,t,imod3,tmod3) begin // Calculate j depending on s. which can be 1, 2, 3 
		if(s==2'd1) begin  // by this formula: j = s x floor(i/s) + (i + Ncbps - floor(tp / 16)) mod s
			j = i; 
		end else if(s==2'd2) begin
			j = {i[8:1], 1'b0} + t[0];
		end else if(s==2'd3) begin
			j = i - imod3 + tmod3; // Calculate equivalent of (t mod 3) & s x floor(i/s) ==> But not suddicient for 
										  // all cases
		end else 
			j = 9'dx;
	end
	
	// Sequential Logic
	always @(posedge Clk) begin
		if(Reset || (!Start)) begin
			Out1 <= 288'd0;
			Valid <= 1'd0;
			Counter <= 9'd0;
		end else begin
			Out1[j] <= x;
			Out2 <= Out2>>1; // Out2 is shifted each cycle. so that the 1th bit is the serial output
			Counter <= Counter + 1'b1;
			if(Counter == Ncbps-1'b1) begin // When all bits in a block with size Ncbps are processed 
				Out2 <= Out1;                // , All bits are ready to be serially out. so Out2 <= Out1
				Out2[j] <= x; // In order to have all bits transfered, result of this cycle should be
								  // additionally filled
				Counter <= 288'd0;
				Valid <= 1'd1;
			end
		end
	end
	
	assign y = Out2[0]; // Out2 is shifted each cycle. so that the 1th bit is the serial output
endmodule
