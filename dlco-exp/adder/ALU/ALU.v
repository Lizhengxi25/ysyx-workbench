module ALU(x, y, judge, result, overflow);

	input[7:0]x, y;
	input [2:0]judge;
	output reg [7:0]result;
	output reg overflow;
	always @(x or y or judge or result or overflow)
	begin
	
		if(judge==3'b000)
		begin
			result = 8'b00000000;
			overflow = 1'b0;
			
			result = x+y;
			/* verilator lint_off UNSIGNED */
			/* verilator lint_off SELRANGE */
			overflow = (x[7]==y[7]) && (result[7]!=x[7]);
			/* verilator lint_on SELRANGE */
		end
		if(judge==3'b001)
		begin
			result = 8'b00000000;
			overflow = 1'b0;
			
			/* verilator lint_off WIDTHEXPAND */
			/* verilator lint_off WIDTHTRUNC */
			result = (x-y);
			/* verilator lint_on WIDTHEXPAND */
			/* verilator lint_on WIDTHTRUNC */
			/* verilator lint_off SELRANGE */
			overflow = (x[7]!=y[7]) && (result[7]!=x[7]);
			/* verilator lint_on UNSIGNED */
			/* verilator lint_on SELRANGE */
		end
		else
		begin	
			/* verilator lint_off CASEINCOMPLETE */
			case (judge)
			/* verilator lint_off WIDTHTRUNC */
			/* verilator lint_off WIDTHEXPAND */	
				3'b010:
					result = ~x;
				3'b011:
					result = x&y;
				3'b100:
					result = x|y;
				3'b101:
					result = x^y;
				3'b110:
					result = x>y;
				3'b111:
					result = (x==y);
			/* verilator lint_on WIDTHTRUNC */
			/* verilator lint_on WIDTHEXPAND */
			endcase
			/* verilator lint_on CASEINCOMPLETE */
		end
	end
endmodule
