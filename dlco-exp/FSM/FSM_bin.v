module FSM_bin
	(
		input  clk, in, reset,
		output reg out
	);

	parameter[3:0] S0 = 0, S1 = 1, S2 = 2, S3 = 3, S4 = 4, S5 = 5, S6 = 6, S7 = 7, S8 = 8;

/* verilator lint_off CASEINCOMPLETE */
	reg [3:0] state;
	always @ (state) begin
		case(state)
			S0 : out = 1'b0;
			S1 : out = 1'b0;
			S2 : out = 1'b0;
			S3 : out = 1'b0;
			S4 : out = 1'b1;
			S5 : out = 1'b0;
			S6 : out = 1'b0;
			S7 : out = 1'b0;
			S8 : out = 1'b1;
		endcase
	end

	always@ (posedge clk) begin
		if(reset)
			state <= S0;
		else
			case(state)
				S0 : if (in) state <= S5; else state <= S1;
				S1 : if (in) state <= S5; else state <= S2;
				S2 : if (in) state <= S5; else state <= S3;
				S3 : if (in) state <= S5; else state <= S4;
				S4 : if (in) state <= S5; else state <= S4;
				S5 : if (in) state <= S6; else state <= S1;
				S6 : if (in) state <= S7; else state <= S1;
				S7 : if (in) state <= S8; else state <= S1;
				S8 : if (in) state <= S8; else state <= S1;
			endcase
	end
	
/* verilator lint_on CASEINCOMPLETE */

//wire[3:0] state;






// SimReg#(4, 0) state(clk, reset, state_din, state_dout, state_wen);



//MuxKeyWithDefault#(9, 4, 1) outMux(.out(out), .key(state), .default_out(0), .lut({
//	S0, 1'b0,
//	S1, 1'b0,
//	S2, 1'b0, 
//	S3, 1'b0, 
//	S4, 1'b0,
//	S5, 1'b0, 
//	S6, 1'b0,
//	S7, 1'b0,
//	S8, 1'b1
//}));
//
//MuxKeyWithDefault#(9, 4, 4) stateMux(.out(state), .key(state), .default_out(S0), .lut({
//	S0, in ? S5 : S1, 
//	S1, in ? S5 : S2, 
//	S2, in ? S5 : S3, 
//	S3, in ? S5 : S4, 
//	S4, in ? S5 : S4,
//	S5, in ? S6 : S1, 
//	S6, in ? S7 : S1, 
//	S7, in ? S8 : S1, 
//	S8, in ? S8 : S1
//}));

endmodule
