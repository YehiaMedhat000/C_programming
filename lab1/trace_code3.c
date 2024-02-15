#include <stdio.h>

int main ()
{
	// declaration of the variables
	int a = 7;
	int b = 0;

	// print the value of the increment operator
	printf ("Before using the post-increment operator\n");
	printf ("The value of a is %d \n", a);
	printf ("The value of b is %d \n", b);
	// use post increment operator
	b = a++;
	printf ("After using the post-increment operator \n");
	printf ("The value of a is %d \n", a);
	printf ("The value of b is %d \n", b);
	return 0;
}
