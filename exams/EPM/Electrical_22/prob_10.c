#include <stdio.h>

int main()
{
	float marks[3] = {90.5, 92.5, 96.5};
	int a = 0;

	while (a < 3)
	{
		printf("%.2f, ", marks[a]); // precision to two decimal places
		// output: 90.50, 92.50, 96.50, 
		a++;
	}
	return (0);
}
