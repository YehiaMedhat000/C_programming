#include <stdio.h>

int main()
{
	int arr[] = {1,2,3,4,5};
	int *p = arr;

	p += 2; // arr + 2 or arr[2]
	++*p; // ++(*p) -> ++arr[2]

	printf("%d\n", *p); // same as printing arr[2]
	// output: 4
	return (0);
}

// useful resources:
// https://www.youtube.com/watch?v=MIL2BK02X8A&pp=ygUVZnJlZWNvZGVjYW1wIHBvaW50ZXJz
// https://www.youtube.com/watch?v=zuegQmMdy8M&pp=ygUVZnJlZWNvZGVjYW1wIHBvaW50ZXJz
