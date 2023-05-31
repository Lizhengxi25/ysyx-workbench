/* verilator lint_off LATCH */
/* verilator lint_off MULTIDRIVEN */
/* verilator lint_off SYNCASYNCNET */
module register(load, clk, pre, clr, in, q);
	input load, clk, pre, clr, in;
	output reg q;

	always@(pre, clr) begin
	
	if(clr == 1)
		q <= 0;
	else if(pre == 1)
		q <= 1;	
		
	end
	
	always@(posedge clk)

		if(pre!=1 && clr!=1)		
			if(load == 1)
				q <= in;
	
endmodule
/* verilator lint_on LATCH */
/* verilator lint_on MULTIDRIVEN */
/* verilator lint_off SYNCASYNCNET */
