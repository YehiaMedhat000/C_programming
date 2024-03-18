#include <stdio.h>

int fun2(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
	return (0);
}

void main(void)
{
	int x = 5, y = 10;

	// function call to swap x and y
	fun2(&x, &y);
	printf("%d %d", x, y);
	// output: 10 5
}
