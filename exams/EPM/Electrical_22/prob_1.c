#include <stdio.h>

int main()
{
	char *ptr = "Labquiz";

	printf("%c\n", *&*&*ptr); // insane isn't it?
	// output: L

	// Explaination: each pair of *& cancels itself
	// so we have finally *ptr, as ptr is a char pointer
	// or in other words it's an array of chars
	// so it's the address of the first char of the array
	// when derefrencing it we get L
	return (0);
}
