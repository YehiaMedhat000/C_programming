#include <stdio.h>

int main()
{
	int aiData[] = {1000, 2000, 3000, 4000, 5000};
	int *piData = aiData;

	++*piData; // ++(*piData) -> ++aiData[0]

	printf("%d, %d, %d\n", aiData[0], aiData[1], *piData);
	// output: 1001, 2000, 1001
	return (0);
}

// useful resources:
// https://www.youtube.com/watch?v=MIL2BK02X8A&pp=ygUVZnJlZWNvZGVjYW1wIHBvaW50ZXJz
// https://www.youtube.com/watch?v=zuegQmMdy8M&pp=ygUVZnJlZWNvZGVjYW1wIHBvaW50ZXJz
