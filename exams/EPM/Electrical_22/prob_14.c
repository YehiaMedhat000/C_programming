#include <stdio.h>

int main()
{
	int i, n;

	scanf("%d", &n); // redundant (not used)

	// on each iteration i increments twice
	//                   vvv after the end of each iteration
	for (i = 1; i <= 19; i++)
	{ // unnecessary brackets, one statement only in for block

		printf("%d", ++i); // pre-increment at every printf

	} // unnecessary brackets, one statement only in for block

	// so i will have values 1, 1 + 1 before printing
	// and the loop will increment it again to 3 at the end of iteration 1
	return (0);
}
