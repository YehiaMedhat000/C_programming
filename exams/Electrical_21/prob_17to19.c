#include <stdio.h>
#include <limits.h>

int main()
{
	// question 17 -> Truncating the fractional part
	int x = 5 / 3; // Expected 1.67
	printf("%d\n", x); // output 1
	// question 18 -> c) -32768 to 32767
	// short type is the 16 bit integer type
	printf("SHRT_MAX: %d, SHRT_MIN: %d\n", SHRT_MAX, SHRT_MIN);
	// question 19 -> c) 19covid
	// Try uncommenting the next and compile
	// int 19covid = 5;
	// output error: invalid suffix "covid" on integer constant
	return (0);
}
