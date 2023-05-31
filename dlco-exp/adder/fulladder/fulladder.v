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

module my_xordoor(a, b, c);
	input a, b;
	output c;
	
	assign c = a^b;
endmodule
/* verilator lint_on DECLFILENAME */

module fulladder(j, a, b, s, l);
	input j, a, b;
	output s, l;
	
	wire k, w, h;
	
	my_xordoor i1(.a(a), .b(b), .c(k));
	my_anddoor i2(.a(a), .b(b), .c(w));
	
	my_xordoor i3(.a(j), .b(k), .c(l));
	my_anddoor i4(.a(j), .b(k), .c(h));
	
	my_ordoor i5(.a(w), .b(h), .c(s));
	
endmodule
