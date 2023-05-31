/* verilator lint_off UNUSEDSIGNAL */
module shifts(
input clk,
input [7:0]x,
output [7:0]y
);

reg [7:0]a;
/* verilator lint_off WIDTHCONCAT */

always@(posedge clk)
	
	a <= {x[6:0], x[7]};
	assign y = a;

endmodule
/* verilator lint_on WIDTHCONCAT */
/* verilator lint_on UNUSEDSIGNAL */
