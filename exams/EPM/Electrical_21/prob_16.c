#include <stdio.h>

int main()
{
	signed char c = 125;

	c = c + 10;
	printf("%d", c);
	// output -121

	// Explaination: Using 2's complement
	// signed char size is one byte
	// 0000 0000
	// The max value is 0111 1111 = 127 (with out the sign bit)
	// The min value is 1000 0000 = -128 (with the sign bit)
	// The value 125 could be represented as 0111 1101
	// 0111 1101
	// 0000 1010
	// 1000 0111 = -128 + 7 = -121
	return (0);
}
