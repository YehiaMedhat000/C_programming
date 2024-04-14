#include <stdio.h>

int fun(int *arr);

int main(void)
{
	int arr[2] = {200, 100};

	fun(arr); // output -> 100
	printf("%d\n", arr[0]); // output -> 200
	return (0);
}

int fun(int* arr)
{
	arr = arr + 1; // increment pointer
	// so now it points to arr[1]
	printf("%d\n", *arr);
}

// useful resources:
// https://www.youtube.com/watch?v=MIL2BK02X8A&pp=ygUVZnJlZWNvZGVjYW1wIHBvaW50ZXJz
// https://www.youtube.com/watch?v=zuegQmMdy8M&pp=ygUVZnJlZWNvZGVjYW1wIHBvaW50ZXJz
