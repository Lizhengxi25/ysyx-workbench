/* verilator lint_off DECLFILENAME */
/* verilator lint_off PINMISSING */
/* verilator lint_off MULTITOP */
module anddoor(a, b, c);
	input a,b;
	output c;
	
	assign c = a&b;
endmodule

module xordoor(a, b, c);
	input a, b;
	output c;
	
	assign c = a^b;
endmodule

module rsflipflop(a, b, c, d);
	input a, b;
	output c, d;
	
	assign c = ~b;
	assign d = ~a;
endmodule

module notdoor(a, c);
	input a;
	output c;
	
	assign c = ~a;
endmodule
/* verilator lint_off UNOPTFLAT */
module etrs(a, clk, c, d);
	input a, clk;
	output c, d;
	
	wire h, p, q, w, e, r, s, x;
	
	notdoor i1(.a(clk), .c(h));
	notdoor i2(.a(a), .c(p));
	anddoor i3(.a(a), .b(h), .c(q));
	anddoor i4(.a(h), .b(p), .c(w));
	rsflipflop i5(.a(q), .b(w), .c(e), .d(r));
	anddoor i6(.a(e), .b(clk), .c(s));
	anddoor i7(.a(clk), .b(r), .c(x));
	rsflipflop i8(.a(s), .b(x), .c(c), .d(d));
	
endmodule		
/* verilator lint_on DECLFILENAME */
/* verilator lint_on UNOPTFLAT */
/* verilator lint_off UNUSEDSIGNAL */
module addingfd(clk, clka, qb, qc, qd);
	input clk;
	output clka, qb, qc, qd;
	
	wire q, w, e, r;
	
	
	notdoor i1(.a(clk), .c(clka));
	etrs i2(.a(q), .clk(clk), .c(qb), .d(q));
	etrs i3(.a(w), .clk(q), .c(qc), .d(w));
	etrs i4(.a(e), .clk(w), .c(qd), .d(e));
endmodule

/* verilator lint_on PINMISSING */
/* verilator lint_on MULTITOP */
/* verilator lint_on UNUSEDSIGNAL */
