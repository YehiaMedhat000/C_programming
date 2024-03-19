#include <stdio.h>

int main()
{
	int a[3] = {1, 2, 4};
	int i = 0;

	while (i < 3)
	{
		printf("%d ", i[a]); // note that it's i[a] not a[i]
		// output: 1 2 4
		// This is the most weird peace of code I've even seen
		// Gemini's explanation
		// https://g.co/gemini/share/d749c6633c5c
		i++;
	}
	return (0);
}
