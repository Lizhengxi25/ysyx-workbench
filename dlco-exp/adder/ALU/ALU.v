module ALU(x, y, judge, result, overflow);

	input[7:0]x, y;
	input [2:0]judge;
	output reg [7:0]result;
	output reg overflow;
	/* verilator lint_off LATCH */
	always @(x or y or judge or result or overflow)
	begin
	/* verilator lint_off WIDTH */
		if(judge==3'b000)
		begin
			result = 8'b00000000;
			overflow = 1'b0;
			
			result = x+y;
			
			overflow = (x[7]==y[7]) && (result[7]!=x[7]);
		
		end
		if(judge==3'b001)
		begin
			result = 8'b00000000;
			overflow = 1'b0;
			result = (x-y);
			overflow = (x[7]!=y[7]) && (result[7]!=x[7]);
			
		end
		else
		begin	
			overflow = 0;
			case (judge)
				
				3'b010:
					result = ~x;
				3'b011:
					result = x&y;
				3'b100:
					result = x|y;
				3'b101:
					result = x^y;
				3'b110:
					result = ((x>y) && (x[7]==y[7])) || (((x-y)<127) && (x[7]!=y[7]));
				3'b111:
					result = (x==y);
				default:
					result = 0;
			endcase
		
		end
	/* verilator lint_on WIDTH */
	end
	/* verilator lint_on LATCH */
endmodule
