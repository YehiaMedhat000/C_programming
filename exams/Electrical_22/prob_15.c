#include <stdio.h>


void main()
{
	int i = 4;

	switch (i)
	{
		default:; // this doesn't compare the swtich value to anything
		// and it doesn't hit a break; here
		// so it will continue execution

		case (3): // will continue executing until a break is found
			// The following lines are executed that make the i value = 5
			i += 5;
			if (i == 8)
			{
				i++;
				if (i == 9)
					break;
				i *= 2;
			}
			i -= 4;
			break;

		case (8):
			i += 5;
			break;
	}
	printf("i = %d\n", i); // output: "i = 5"
}
