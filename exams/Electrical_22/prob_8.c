#include <stdio.h>

void test(int *pr)
{
	int x = 100;

	p = &x; // p???? isn't declared -> Compile Error
	// error: ‘p’ undeclared (first use in this function
}

int main(void)
{
	int num = 200;
	int *pr = &num;

	test(pr);
	printf("%d", *pr);
	return (0);
}

// useful resources:
// https://www.youtube.com/watch?v=MIL2BK02X8A&pp=ygUVZnJlZWNvZGVjYW1wIHBvaW50ZXJz
// https://www.youtube.com/watch?v=zuegQmMdy8M&pp=ygUVZnJlZWNvZGVjYW1wIHBvaW50ZXJz
