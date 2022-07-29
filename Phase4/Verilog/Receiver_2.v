`timescale 1ns / 1ps
module Receiver_2(Clk, Reset, x, y, Valid, num_pads);
	// Inputs and Outputs
	input Clk, Reset, x;
	input [4:0]num_pads; // Number of pad bits is needed to calculate the last bit position of frame
	output y, Valid;
	
	wire Clk, Reset, x; // x is the bit of serially input data
	wire [4:0]num_pads;
	wire y, Valid; // y is the bit of serially output data
	
	// Internal Signals 
	reg [49:0]Queue_In; // Decoding the Signal field at first leads to 48+2 cycles latency in process. 
							  // In order not to miss any input bit, I have to use a 50 Bits queue.
	reg [23:0]Queue_OutDeS; // Decoding the Signal field at first results 24 bit of signal field which
									// should be serially out as the output. Because signal field was not interleaved
									// and was not scrambled. This reg is filled in the first 48*2+1=97 cycles of process.
	reg [3:0]Rate; // This reg is filled in the first 48*2+1=97 cycles of process and shows the rate of sent signal.
	reg [11:0]Length; // This reg is filled in the first 48*2+1=97 cycles of process and shows the length of 
							// sent signal.
	reg [11:0]Queue_FrameDetected; // We should check the last 12 bits of received bits in order to check preamble and
											 // Start of a frame. If all 12 last bits are all ones, the Frame_Detected signal  
											 // would be true.
	reg [15:0]Counter; // This counter shows the state of the process.
	wire [8:0]Ncbps; // This is the number of coded bits which is filled by a LUT in Decoder_Viterbi module depending 
						  // on the rate.
	wire Frame_Detected; // If all 12 last bits are all ones, the Frame_Detected signal would be true. This show the 
								// start of a frame.
	
	wire [15:0]end_frame; // This signal is calculated to check if  all output bits are serially out. 
								 // When all outputs are serially sent, the Counter would have the value of end_frame.
	wire Reset_Internal; // If end of frame is detected, an internal reset is used to set the initial state of the 
								// circut.
	assign end_frame = 16'd96 + {length_Dec[13:0],2'b00} + 16'd24 + Ncbps + 16'd3; // 96 => Cycles needed for decoding Signal field.
																											 // 24 => Cycles needed for Service out.
																											 // Ncbps => This is the latency of DeInterleaving.
																											 // (Number of DATA bits) * 4 => Cycles needed for Decoding DATA field.
	assign Reset_Internal = Valid && (Counter==end_frame); // If end of frame is detected, an internal reset is used to set the initial state of the
																			 // circut.
	
	assign Frame_Detected = &Queue_FrameDetected[11:0];// If all 12 last bits are all ones, the Frame_Detected signal would be true. This show the 
																		// start of a frame.
	always @(posedge Clk) begin
		if(Reset || Reset_Internal) begin
			Counter <= 16'd0;
			Queue_FrameDetected <= 12'd0;
		end else begin 
			if(Frame_Detected) begin
				Counter <= Counter + 1'b1;
				if(Counter>=16'd74 && Counter<=16'd77)
					Rate <= {Rate[2:0], y1};
				if(Counter>=16'd79 && Counter<=16'd90)
					Length <= {Length[10:0], y1};
			end else 
				Queue_FrameDetected <= {Queue_FrameDetected[10:0],x}; // the last received 12 bits are used to detect start
																						// of a frame and set the Frame_Detected signal.
			if(Valid_Dec && Counter<16'd98) // Valid data from decoder_viterbi in the first 97 cycles(Decoding signal field) are stored to pass as the output.
				Queue_OutDeS <= {Queue_OutDeS[22:0], y1};
			else if(Valid_Dec && Counter!=16'd98) // Valid data from DeInterleaver after the 97 cycle is stored in a queue to sent Signal filed and DATA field out.
				Queue_OutDeS <= {Queue_OutDeS[22:0], y2};
			Queue_In <= {Queue_In[48:0],x}; // Decoding the Signal field at first leads to 48+2 cycles latency in process. 
													  // In order not to miss any input bit, I have to use a 50 Bits queue.
		end		
	end
	 
	 
	// Decoder_Viterbi
	wire Valid_Dec;
	wire y1;
	wire x_Dec;
	assign x_Dec = (Counter<=16'd97)?x:y0; // In the first 97 cycles, input bits should be decoded because Signal field 
														// doesn't need deinterleave or descrambld.
	wire start_Dec;
	assign start_Dec = (Counter<=16'd97)?Frame_Detected:Valid_DeI; // In the first 97 cycles, input bits should be decoded because Signal field 
																						// doesn't need deinterleave or descrambld.
	wire [14:0]length_Dec; // Signal field is 24 bits and should be decoded properly. For Data field we should calculate the number of DATA bits. 
	assign length_Dec = (Counter<=16'd97)?15'd24:({Length,3'b000}+6'd16+6'd6+num_pads); // 8*Length ==> number of PSDU bits.
																													// 16 bits ==> SERVICE
																													// 6 Bits ==> Tail Bits
																													// num_pads ==> Pad bits
	
	Decoder_Viterbi Dec_Ins (
    .Clk(Clk), 
    .Reset(Reset || Reset_Internal), 
    .x(x_Dec), 
    .Out(y1),  
    .Start(start_Dec), 
    .Valid(Valid_Dec), 
    .Length(length_Dec)
    );
	 
	// DeInterleave
	wire y0;
	wire start_DeInt;
	assign start_DeInt = (Counter>16'd97);
	wire Valid_DeI;
	
	DeInterleaver DeI_Ins (
    .Clk(Clk), 
    .Reset(Reset || Reset_Internal), 
    .Start(start_DeInt), 
    .x(Queue_In[49]), 
    .y(y0), 
    .Rate(Rate), 
    .Valid(Valid_DeI), 
    .Ncbps(Ncbps)
    );
	  
	// DeScrambler
	wire y2;
	DeScrambler DeS_Ins (
    .Clk(Clk), 
    .Reset(Reset || Reset_Internal), 
    .x(y1), 
    .y(y2), 
    .Start(Valid_Dec)
    );
	 
	assign y = Queue_OutDeS[23];
	assign Valid = Valid_Dec && (Counter>16'd99);

endmodule
