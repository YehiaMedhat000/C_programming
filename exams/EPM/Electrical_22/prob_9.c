#include <stdio.h>

int main()
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		// Try uncommenting the break statements
		// and note the difference
		switch (i)
		{
			case 0:
				i += 3;
				// break;
				// so it continues to execute the following code
				// even if case isn't met until it finds break;
			case 1:
				i += 2;
				// break;
			case 5:
				i += 3;
				// break;
			default:
				i += 2;
				break;
		}
		printf("%d ", i); // output: 10
	}
	return (0);
}
