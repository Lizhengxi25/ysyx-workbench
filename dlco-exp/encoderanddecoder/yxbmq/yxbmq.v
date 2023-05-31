module yxbmq(x, en, y);
	input [3:0] x;
	input en;
	output reg [1:0]y;
	integer i;
	always @(x or en) begin
		if(en) begin
			/* verilator lint_off WIDTHEXPAND */
			y = 0;
			for( i=0; i<=3; i=i+1)
				if(x[i] == 1)
					y=i[1:0];
			end
		else
			y=0;
	end
endmodule
