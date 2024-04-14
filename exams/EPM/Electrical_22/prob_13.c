#include <stdio.h>

int main()
{
	int i, n, sum = 0;

	scanf("%d", &n);

	// on each iteration i increments twice
	//                  vvv after the end of each iteration
	for (i = 0; i <= n; i++)
		sum += i++; // and here after assigning i to the sum
	// so i will have values 0, 0 + 2, 2 + 2, and so on
	printf("%d", sum);
	// output: sum of numbers from 0 to even n
	return (0);
}
