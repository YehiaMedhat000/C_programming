#include <stdio.h>

// question 27: b) Same address is printed

void main()
{
	int a[3] = {1, 2, 3};
	int *p = a;
	int **r = &p;

	// output: 0x7ffc8d9b5e5c 0x7ffc8d9b5e5

	// Explaination: a is an address (pointer) for the element a[0]
	// we store pointer a in p
	// We store the address of p in double pointer r
	// we then derefrence r once, and this accesses p
	// and print *r (which is same as p)
	// and a which is also same as p
	printf("%p %p", *r, a);
}
