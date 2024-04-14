#include <stdio.h>

void somefunc(int arr[]);

int main()
{
	// question 22 -> c) Base address of the array
	int arr[6] = {1, 2, 3, 4, 5, 6};

	somefunc(arr);
	printf("Base address: %d\n", arr);
	// output
	// Base address: 71280496
	// Base address: 71280496
	// Identical values mean the same address

	// question 23 -> c) The program may crash if some important data gets overwritten
	arr[10] = 5;
	printf("%d\n", arr[10]);
	// output:
	// 5
	// Segmentation fault
	// Note: Segmenation fault isn't sent by compiler

	return (0);
}

void somefunc(int arr[])
{
	printf("Base address: %d\n", arr);
}
