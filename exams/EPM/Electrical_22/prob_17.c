#include <stdio.h>

int fun(void)
{
	int count = 0; // changed variable from static to non-static

	count++;
	return (count);
}

int main()
{
	printf("%d", fun); // output: Address of fun
	printf("%d", fun); // output: Address of fun for 2nd call
	// Calling function without () isn't executing it
	// Actually the name of the function itself is a pointer to it
	return (0);
}
