/* verilator lint_off VARHIDDEN */
module ram
#(
	parameter RAM_WIDTH = 8,
	parameter RAM_ADDR_WIDTH = 3
)
(
	input clk, 
	input wen, 
	input [(RAM_WIDTH-1):0] din,
	input [(RAM_ADDR_WIDTH-1):0] addrin,
	input [(RAM_ADDR_WIDTH-1):0] addrout,
	output [(RAM_WIDTH-1):0] dout
);

	reg [(RAM_WIDTH-1):0] ram [(2**(RAM_ADDR_WIDTH)-1):0];
	
	always@(posedge clk)
		if(wen)
			ram[addrin] <= din;
	
	assign dout = ram[addrout];
			
endmodule
/* verilator lint_on VARHIDDEN */
