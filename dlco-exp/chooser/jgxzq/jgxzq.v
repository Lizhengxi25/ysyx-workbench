/* verilator lint_off DECLFILENAME */
module my_anddoor(a, b, c);
	input a,b;
	output c;
	
	assign c = a&b;
endmodule

module my_ordoor(a, b, c);
	input a, b;
	output c;
	
	assign c = a|b;
endmodule

module my_notdoor(a, c);
	input a;
	output c;
	
	assign c = ~a;
endmodule
/* verilator lint_on DECLFILENAME */

module jgxzq(a, b, c, y);
	input a, b, c;
	output y;
	
	wire l, r, b_n;
	my_notdoor i1(.a(b), .c(b_n));
	my_anddoor i2(.a(a), .b(b), .c(l));
	my_anddoor i3(.a(b_n), .b(c), .c(r));
	my_ordoor  i4(.a(l), .b(r), .c(y));

endmodule
	
