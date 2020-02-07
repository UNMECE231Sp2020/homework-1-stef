#include <stdio.h>
#include "my_complex.h"

int main() {
	Complex a = {3, 4};
	Complex b = {5, 12};
	
	Complex (*fn1[4])(Complex, Complex) = {complex_add, complex_sub, complex_mult, complex_div};
	double (*fn2[2])(Complex) = {magnitude, phase};

	int i;

	for (i=0; i<4; i++) {
		fn_hdlr1(fn1[i], a, b);

	}
	printf("\n");

	for (i=0; i<2; i++) {
		fn_hdlr2(fn2[i], a);
		fn_hdlr2(fn2[i], b);
	}		

	return 0;
}
