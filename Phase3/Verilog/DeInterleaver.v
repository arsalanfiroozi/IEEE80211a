`timescale 1ns / 1ps
module DeInterleaver(Clk, Reset, Start, x, y, Rate, Valid, Ncbps);
	// Inputs and Outputs
	input Clk, Reset, Start, x;
	input [3:0]Rate; // Used to indicate Ncbps and Nbpsc from LUT
	output y, Valid; // Valid shows if the output bit is valid
	output [8:0]Ncbps;
	
	wire Clk, Reset, Start, x;
	wire [3:0]Rate;
	reg [8:0]Ncbps; // This signal is the result of LUT by the given Rate. Max: 288
	wire y;
	reg Valid;
	
	// Internal Signals
	reg [287:0]Out1, Out2; // Two series of Registers are used. The first one is used to save information while
								  // the new position of bits are calculated.
								  // The second one is used to make the design pipelined. While the second one is being
								  // shifted and detemine the valid output of this module, the first one is filled.
								  // The second one is shifted while calculating and filled when calculation is completed.
	wire [8:0]t;
	wire [8:0]j,t0; // The j index shows the position after the second permutation. This index shows which bit
						 // should be filled.
	wire [2:0]t_t0mod3, t_countermod3; // These two lines used to cal. an equivalent value of (mod 3)
	wire [1:0]t0mod3, countermod3;
	reg [8:0]i; // The i index shows the position after the first permutation
	wire [15:0]tp0,tp1; // tp0 signal is the equivalent value of 16 x Counter / Ncbps x 2^8
							  // tp1 signal is the equivalent value of 16 x i / Ncbps x 2^8
	wire [1:0]s; // This signal is used for s = max{1, Nbpsc/2}
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
				Ti = 7'd86;
			end
			4'b1111: begin // 9 Mbits/S
				Ncbps = 9'd48;
				Nbpsc = 3'd1;
				Ti = 7'd86;
			end
			4'b0101: begin // 12 Mbits/S
				Ncbps = 9'd96;
				Nbpsc = 3'd2;
				Ti = 7'd43;
			end
			4'b0111: begin // 18 Mbits/S
				Ncbps = 9'd96;
				Nbpsc = 3'd2;
				Ti = 7'd43;
			end
			4'b1001: begin // 24 Mbits/S
				Ncbps = 9'd192;
				Nbpsc = 3'd4;
				Ti = 7'd22;
			end
			4'b1011: begin // 36 Mbits/S
				Ncbps = 9'd192;
				Nbpsc = 3'd4;
				Ti = 7'd22;
			end
			4'b0001: begin // 48 Mbits/S
				Ncbps = 9'd288;
				Nbpsc = 3'd6;
				Ti = 7'd15;
			end
			4'b0011: begin // 54 Mbits/S
				Ncbps = 9'd288;
				Nbpsc = 3'd6;
				Ti = 7'd15;
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
	assign tp0 = Counter * Ti; // 16 x Counter / Ncbps * 2^8
	assign t0 = Counter + tp0[15:8]; // Counter + floor(16 * Counter / Ncbps)
	assign t_countermod3 = Counter[0] - Counter[1] + Counter[2] - Counter[3] + Counter[4] - Counter[5] + Counter[6] - Counter[7] + Counter[8];
	assign countermod3 = (&t_countermod3[1:0])?2'd0:t_countermod3[1:0];	// These two lines cal. an equivalent. Value of (i mod 3)
	assign t_t0mod3 = t0[0] - t0[1] + t0[2] - t0[3] + t0[4] - t0[5] + t0[6] - t0[7] + t0[8]; // These two lines cal. an equivalent 
	assign t0mod3 = (&t_t0mod3[1:0])?2'd0:t_t0mod3[1:0];										        // value of (t mod 3)
	
	
	always @(s,Counter,t0,countermod3,t0mod3) begin // Calculate i depending on s. which can be 1, 2, 3 
		if(s==2'd1) begin // by this formula: j = s x floor(i/s) + (i + Ncbps - floor(tp / 16)) mod s
			i = Counter;
		end else if(s==2'd2) begin
			i = {Counter[8:1], 1'b0} + t0[0];
		end else if(s==2'd3) begin
			i = Counter - countermod3 + t0mod3; // Calculate equivalent of (Counter mod 3) & s x floor(i/s) ==> But not suddicient for 
															// all cases
		end else 
			i = 9'dx;
	end
	
	assign tp1 = i * Ti; // 16 x i / Ncbps * 2^8
	assign j = {i[4:0], 4'd0} - (Ncbps - 1'b1)*tp1[15:8]; // j = 16 x i - (Ncbps - 1) floor(16*i/Ncbps)
	
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
