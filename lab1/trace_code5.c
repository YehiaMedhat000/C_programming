#include <stdio.h>

int main ()
{
	int x=0, y=0, z=0, result=0;
	x = 7; y = 12; z = 15;

	printf ("Before using the increment operator: \n");
	printf ("The original value of x: %d\n", x);
	printf ("The original value of x: %d\n", y);
	printf ("The original value of x: %d\n", z);

	// use pre-increment and post-increment operator
	result = x++ + ++x + ++y + y++ + ++z;
	printf ("After using the increment operator: \n");
	printf ("The result of the expression is: %d\n", result);
	printf ("The updated value of x: %d\n", x);
	printf ("The updated value of y: %d\n", y);
	printf ("The updated value of z: %d\n", z);
	return 0;
}
