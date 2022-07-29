`timescale 1ns / 1ps
module Transmitter(Clk, Reset, x, y, Enable, num_pads);
	// Inputs and Outputs
	input Clk, Reset, x, Enable;
	input [2:0]num_pads; // Ceil(Number of pad bits / byte)
	output y;
	
	wire Clk, Reset, x, Enable;
	reg y;
	
	// Internal Signals
	reg [11:0]Length,Length_Next; // These Registers are used to store Length value
	reg [10:0]State; // State show how many bits are received after preamle
	reg [11:0]Preamble,Queue; // This Shift Register is used to send preamble. If this Reg. is all zeros
							        // then it's assumed that Preamble is sent
	reg [12:0]datalength; // This counter is used to know how many bits of data is read. used to stop transmitting
	reg start; // this flag start the operation of scrambling
	wire out_scrambler;
	wire sent_Preamble; // A flag showing if a frame should be read or not
	wire [12:0]endlength;
	
	assign sent_Preamble = !(|Preamble); // Setting the flag
	assign endlength = Length + 3'b101 + num_pads; // Calculate the number of bytes which should be transmitted
																  // after preamble
	
	Scrambler scrambler (
    .Clk(Clk), 
    .Reset(Reset), 
    .Start(start), 
    .Seed(7'd111), 
    .x(Queue[11]), 
    .y(out_scrambler)
    );
	 
	
	// Combinational Logic
	always @(State, out_scrambler, x, Length, sent_Preamble, Enable, Queue) begin
		if(State > 11'd23) begin // If Data bits are received ==> Bits should be scrambled
			y = out_scrambler;
			start = 1'b1;
		end else if(sent_Preamble) begin // If Preamble is sent and Service bit is being received
			y = Queue[11];
			start = 1'b0;
		end else if(Enable) begin // If Preamble is not sent ==> 12 one bits should be sent
			y = 1'b1;
			start = 1'b0;
		end else begin // In stand by mode ==> zero bits are sent
			y = 1'b0;
			start = 1'b0;
		end
		if(State>7'd4 && State<7'd17) // If the Length bits are received, these bits should be stored
			Length_Next = {Length[10:0],Queue[11]};
		else
			Length_Next = Length;
	end
	
	// Sequential Logic
	always @(posedge Clk) begin
		if(Reset || !Enable) begin
			State <= 11'd0;
			Length <= 12'd0;
			Preamble <= 12'hFFF;
			datalength <= 13'd0;
		end else if(Enable) begin
			if(sent_Preamble) begin
				State <= State + 1'b1; // State show how many bits are sent after preamle
				Length <= Length_Next;
				datalength <= datalength + 1'b1;
				if(!(|(datalength^{endlength, 3'b000})) && State > 11'd28) begin // If Frame is sent Completely
					Preamble <= 12'hFFF;
					State <= 11'd0;
					Length <= 12'd0;
					datalength <= 13'd0;
				end
			end else begin
				Preamble <= Preamble << 1; // A zero bit is appended in Preamble as one bit one is sent
			end
		end
		Queue <= {Queue[10:0],x}; // The Queue for compensating the latency
	end
	
endmodule
