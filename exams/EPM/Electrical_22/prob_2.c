#include <stdio.h>

void fn(int *i, int *j)
{
	i = j; // This makes i point to what j points to
	*i = 10; // i will point to 10 so j also will point to 10
}

int main()
{
	int x = 0, y = 1;

	printf("%d %d\n", &x, &y); // print addresses before
	fn(&x, &y); //  this notation doesn't change addresses of x or y
	printf("%d %d\n", x, y);
	printf("%d %d\n", &x, &y); // print addresses after
	return (0);
}

// output: 0 10
// Explaination: x still points to the same address so it has value 0
// Just y , which is assigned to j, points to what i points to which is 10
// but no addresses are changed
