#include <stdio.h>

int main(void)
{
	int x, y = 2, z, a;

	if (x = y % 4)
		z = 2;
	//printf("%d %d", x, z, a); // This is the actual line
	// But it has a syntax error
	printf("%d %d %d\n", x, z, a); // This is the corrected line
	// output: 2 2 0
	// Wonder why a is 0? check this
	// https://stackoverflow.com/questions/1597405/what-happens-to-a-declared-uninitialized-variable-in-c-does-it-have-a-value
	return (0);
}
