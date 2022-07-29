`timescale 1ns / 1ps
module Main(Clk, Reset, Start, TranAntenna, RecAntenna, TransFrame , RecFrame, Valid_Rec, Valid_Tra, num_pads_rec, num_pads_tra);
	// Inputs and Outputs
	input Clk, Reset;
	input [4:0]num_pads_rec, num_pads_tra; // number of pad bits calculated by cpu.
	input RecAntenna, TransFrame, Start; // Start signal is set for sending a ftame.
	output RecFrame, TranAntenna, Valid_Rec, Valid_Tra;
	
	wire Start;
	wire RecAntenna, TransFrame;
	wire [4:0]num_pads_rec;
	wire [4:0]num_pads_tra;
	wire RecFrame, TranAntenna, Valid_Rec, Valid_Tra;
	
	Receiver_2 Receiver (
    .Clk(Clk), 
    .Reset(Reset), 
    .x(RecAntenna), // Frame wanted to be sent
    .y(RecFrame), // Frame which is ready to be sent with antenna
    .Valid(Valid_Rec), 
    .num_pads(num_pads_rec)
    );
	
	Transmitter_2 Transmitter (
    .Clk(Clk), 
    .Reset(Reset), 
    .Start(Start), 
    .x(TransFrame),  // bits received by antenna
    .y(TranAntenna),  // processed Frame 
    .Valid(Valid_Tra), 
    .num_pads(num_pads_tra)
    );
	 
endmodule
