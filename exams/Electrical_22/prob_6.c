#include <stdio.h>

void main()
{
	int i = 0;
	int j = 0;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (i > 1)
				continue; // won't get executed when i = 0 or 1
			printf("Hi \n"); // so this line will be executed
			// for 2 iterations of outer loop and 4 iterations of inner loop
		}
	}
	// output
	// Hi is printed 8 times
}
