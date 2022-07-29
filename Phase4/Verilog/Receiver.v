`timescale 1ns / 1ps
module Receiver(Clk, Reset, x, y, num_pads);
	// Input and Outputs Signals
	input Clk, Reset, x;
	input [2:0]num_pads; // Ceil(Number of pad bits / byte)
	output y;
	
	wire Clk, Reset, x;
	reg y;
	
	// Internal Signals
	reg y_next;
	reg [11:0]Length,Length_Next; // These Registers are used to store Length value
	reg [10:0]State; // State show how many bits are received after preamle
	reg [11:0]Preamble; // This Shift Register is used to check if the frame is started or not. If this Reg. is all ones
							  // then it's assumed that Preamble is received
	reg [12:0]datalength; // This counter is used to know how many bits of data is read. used to stop reading and serching for another preamble
	wire PreambleCheck; // A flag showing if a frame should be read or not
	reg start; 
	wire out_descrambler;
	wire [12:0]endlength;
	
	assign endlength = Length + 3'b101 + num_pads; // Calculate the number of bytes which should be received after preamble
	assign PreambleCheck = &Preamble[11:0]; // Setting the flag
	
	DeScrambler descrambler (
    .Clk(Clk), 
    .Reset(Reset), 
    .Start(start), 
    .x(x), 
    .y(out_descrambler)
    );
	
	// Combinational Logic
	always @(State, out_descrambler, x, Length, PreambleCheck) begin
		if(State > 11'd23 && PreambleCheck) begin // Data field should be descrambled
			y_next = out_descrambler;
			start = 1'b1;
		end else if(PreambleCheck) begin // Non Data Field should be passed without any changes
			y_next = x;
			start = 1'b0;
		end else begin // Output is zero if no frame is detected
			y_next = 1'b0;
			start = 1'b0;
		end
		if(State>7'd4 && State<7'd17)
			Length_Next = {Length[10:0],x};
		else
			Length_Next = Length;
	end
	
	// Sequential Logic
	always @(posedge Clk) begin
		if(Reset || (!PreambleCheck)) begin
			State <= 11'd0;
			Length <= 12'd0;
			datalength <= 13'd0;
			if(Reset) // Preamble should be a memory of 12 last bits 
				Preamble <= 12'd0;
			else
				Preamble <= {Preamble[10:0],x};
		end else begin
			State <= State + 1'b1; // State show how many bits are received after preamle
			Length <= Length_Next;
			datalength <= datalength + 1'b1;
			if(!(|(datalength^{endlength, 3'b000})) && State > 11'd28) begin // If Frame is read Completely
				Preamble <= 12'd0;
				Length <= 12'd0;
				datalength <= 13'd0;
			end
		end
		y <= y_next;
	end

endmodule
