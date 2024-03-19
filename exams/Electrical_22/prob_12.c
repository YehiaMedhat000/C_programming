#include <stdio.h>

int main()
{
	static int i; // same as static int i = 0;
	// any static variable if not initialized
	// is set to 0, NULL according to its type
	// arithmetic or pointer

	for (++i;++i;++i) // first iteration: increment twice
	//  ^^^;^^^
	//  Second iteration increments twice
	//  in the condition and the loop default increment
	{
		printf("%d ", i); // first iteration -> 2
		// 2nd iteration -> 4
		// This condition is met
		if (i == 4)
			// will get here and break the loop
			break;
	}
	return (0);
}
