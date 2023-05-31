module amALU(x, y, judge, result, overflow);

	input[7:0]x, y;
	input judge;
	output reg [7:0]result;
	output reg overflow;
	always @(x or y or judge or result or overflow)
	if(judge==0)
	begin
		result=8'b00000000;
		overflow=1'b0;
		result = x+y;
		/* verilator lint_off UNSIGNED */
		/* verilator lint_off SELRANGE */
		overflow = (x[7]==y[7]) && (result[7]!=x[7]);
		/* verilator lint_on SELRANGE */
	end
	
	else
	begin
		result=8'b00000000;
		overflow=1'b0;
		/* verilator lint_off WIDTHEXPAND */
		/* verilator lint_off WIDTHTRUNC */
		result = (x-y);
		/* verilator lint_on WIDTHEXPAND */
		/* verilator lint_on WIDTHTRUNC */
		/* verilator lint_off SELRANGE */
		overflow = (x[7]==y[7]) && (result[7]!=x[7]);
		/* verilator lint_on UNSIGNED */
		/* verilator lint_on SELRANGE */
		
	end
	
endmodule
