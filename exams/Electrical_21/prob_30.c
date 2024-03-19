#include <stdio.h>

// question 30: d) Compile error

int main()
{
	int *p = (int *)2; // this is fine
	int *q = (int *)3; // this is fine

	printf("%d", p + q); // this is the problem
	// error invalid operands to binary + (have 'int *' and 'int *')
	return (0);
}
