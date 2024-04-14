#include <stdio.h>

// question 25 what is the output of the following code

int main()
{
	int n;

	for (n = 9; n != 0; n--)
		printf("n = %d", n--);
	return (0);
}

// output infinite loop

// Explaination: n decrements twice per iteration
// iteration 1: n = 9
// iteration 2: n = 7
// iteration 3: n = 5
// iteration 4: n = 3
// iteration 5: n = 1
// iteration 6: n = -1
// So it never equal to 0 to break the loop
