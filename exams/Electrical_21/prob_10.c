#include <stdio.h>

int main()
{
	int a = 1, b = 2, c = 3;
	int *ptr1 = &a, *ptr2 = &b, *ptr3=&c;
	int **sptr = &ptr1; // -Ref

	*sptr = ptr2;

	printf("ptr1: %d, &a: %d\n", ptr1, &a);
	printf("ptr1: %d, &b: %d\n", ptr1, &b);
	printf("sptr: %d, &ptr2: %d\n", sptr, &ptr2);
	// output
	// ptr1: 1475710344, &a: 1475710348
	// ptr1: 1475710344, &b: 1475710344
	// sptr: 1475710328, &ptr2: 1475710320

	// Dr forgot the return statement
	return (0);
}
