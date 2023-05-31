module adfd(clk, en, out);
	input clk, en;
	output reg[2:0] out;
	
	always@(posedge clk)
		if(en) out<=out+1;
		else out<=0;
endmodule
