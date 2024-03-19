#include <stdio.h>

// question 26: b) ptr1 points to b

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

	// Explaination:
	// ptr1 -> a, ptr2 -> b
	// sptr -> ptr1 (Becuase it's double pointer)
	// when derefrencing sptr once as *sptr
	// We access the value of ptr1, but, then we assign it
	// to the value of ptr2
	// so ptr1 now points to the same address that ptr2 points to
	// therefore ptr1 -> b
	// therefore *sptr -> b

	// Dr forgot the return statement
	return (0);
}
