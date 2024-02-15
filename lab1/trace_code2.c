#include <stdio.h>

int main ()
{
	// declare integer variables
	int a, b, c, d, x;

	// initialization of the variables
	a = 5;
	b = 7;
	c = 12;
	d = 15;

	// use pre-increment operator in the mathematical expression
	x = ++a + ++b + ++c + ++d;
	printf ("The value of x is: %d \n", x);

	// print the updated value of a, b, c, and d
	printf ("The updated value of a = %d, b = %d, c = %d and d = %d \n", a, b, c, d);
	return 0;
}
