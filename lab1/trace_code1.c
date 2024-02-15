#include <stdio.h>

int main ()
{
	// declaration of the variables
	int a = 7;
	int b = 2 ;

	// print the value of the increment operator
	printf ("Use the pre-increment operator \n" );
	printf ("The value of a is %d \n", a);
	printf ("The value of b is %d \n", b);
	// use pre-increment operator
	b = ++a;
	printf ("After using the pre-increment operator");
	printf ("The value of a is %d \n", a);
	printf ("The value of b is %d \n", b);
	return 0;
}
