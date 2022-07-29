`timescale 1ns / 1ps
module Transmitter_2(Clk, Reset, Start, x, y, Valid, num_pads);
	// Inputs and Outputs
	input Clk, Reset, x, Start;
	input [4:0]num_pads; // Number of pad bits is needed to calculate the last bit position of frame
	output y, Valid;
	
	wire Clk, Reset, x, Start; // x is the bit of serially input data
	wire [4:0]num_pads;
	wire y, Valid; // y is the bit of serially output data
	
	// Internal Signals Detector
	reg [3:0]Rate; // This reg is filled in the first 48*2+1=97 cycles of process and shows the rate of sent signal.
	reg [11:0]Length; // This reg is filled in the first 48*2+1=97 cycles of process and shows the length of 
							// sent signal.
	reg [15:0]Counter; // This counter shows the state of the process.
	wire [15:0]end_frame; // This signal is calculated to check if  all output bits are serially out. 
								 // When all outputs are serially sent, the Counter would have the value of end_frame.
	wire Reset_Internal; // If end of frame is detected, an internal reset is used to set the initial state of the 
								// circut.
	wire [8:0]Ncbps; // This is the number of coded bits which is filled by a LUT in Encoder module depending 
						  // on the rate.
	assign end_frame = {Length, 4'b0000} + 6'd48 + 6'd44 + 6'd12 + {num_pads,1'b0} + Ncbps + 6'd48; // Length*16 ==> Cycles needed for Encoding SIGNAL
																																	// 48 ==> Signal Latency
																																	// 44 ==> 16 bit SERVICE and 6 Bit tail
																																	// 48 ==> Latency
																																	// 12 ==> Preamble
																																	// Ncbps ==> Latency
																																	// num_pads ==> num_pads*2
	assign Reset_Internal = (!Start) | (Valid && Counter==end_frame); // If end of frame is detected, an internal reset is used to set the initial state of the
																						   // circut.
	always @(posedge Clk) begin
		if(Reset || Reset_Internal) begin
			Counter <= 5'd0;
		end else begin 
			if(Counter<=6'd3) // First 4 bits are rate
				Rate <= {Rate[2:0], x};
			if(Counter>6'd4 && Counter<=6'd16) // 11 bits after rate and reserved bit are Length
				Length <= {Length[10:0], x};
			Counter <= Counter + 1'b1;
		end		
	end
	 
	// Internal Signals Scrambler
	wire y0;
	wire Start_Scrambler;
	wire Sent_Service;
	wire Valid_Scrambler;
	
	assign Valid_Scrambler = 1'b1; // Zero latency
	assign Sent_Service = Counter>=6'd24; // All DATA bits should be scrambled
	
	Scrambler Scr_Ins (
    .Clk(Clk), 
    .Reset(Reset || Reset_Internal), 
    .Start(Sent_Service), 
    .Seed(7'd111), 
    .x(x), 
    .y(y0)
    );
	
	// Internal Signals Encoder
	wire y1;
	reg Valid_Encoder;
	
	always@(posedge Clk) begin
		if(Reset || Reset_Internal) begin
			Valid_Encoder <= 1'b0;
		end else begin
			if(Valid_Scrambler) // Encoder should start 1 cycle after Scrambler
				Valid_Encoder <= 1'b1;
		end
	end
	
	Encoder Enc_Ins (
    .Clk(Clk), 
    .Reset(Reset || Reset_Internal), 
    .x(y0), 
    .Out(y1), 
    .Start(1'b1)
    );
	 
	// Internal Signals Interleaver
	wire y_Interleaver;
	reg [59:0]reg_y_Interleaver; // 60 Queue is used for 12 bits preamble and 48 bits encoded SIGNAL field.
	wire start_Int;
	assign start_Int = Counter>16'd48 && Valid_Encoder && (!Reset_Internal); // DATA field should be interleaved.
	
	always @(posedge Clk) begin
		if(Reset || Reset_Internal) 
			reg_y_Interleaver <= 60'hFFFFFFFFFFFFFFF;
		if(Valid)
			reg_y_Interleaver <= {reg_y_Interleaver[58:0], y_Interleaver}; // Shifted by the output of interleaver while interleaving DATA field.
		else if(|Counter && Counter<=16'd48)
			reg_y_Interleaver <= {reg_y_Interleaver[58:0], y1}; // 12 bits preamble and 48 bits encoded SIGNAL field.	
	end
	
	Interleaver Int_Ins (
    .Clk(Clk), 
    .Reset(Reset), 
    .Start(start_Int), 
    .x(y1), 
    .y(y_Interleaver), 
    .Rate(Rate),
    .Valid(Valid), 
	 .Ncbps(Ncbps)
    );
	 
	 assign y = reg_y_Interleaver[59];

endmodule
