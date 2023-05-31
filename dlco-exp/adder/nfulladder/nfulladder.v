module nfulladder(in_x, in_y, out_c);
	
	input [7:0] in_x, in_y;
	output reg [7:0] out_c;
	
	always @(in_x or in_y or out_c)
	out_c = in_x + in_y;
endmodule
