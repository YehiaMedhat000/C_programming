#include <stdio.h>

int main()
{
	// question 21
	int aiData[5] = {100, 200, 30, 40, 50};
	int *piData = aiData;
	*++piData;

	printf("%d, %d, %d\n", aiData[0], aiData[1], *piData);
	// output 100, 200, 200
	return (0);
}

// Useful resources for pointers, Full courses about pointers
// About 2 hours long each video
// https://www.youtube.com/watch?v=MIL2BK02X8A&pp=ygUVRnJlZWNvZGVjYW1wIHBvaXRuZXJz
// or
// https://www.youtube.com/watch?v=zuegQmMdy8M&pp=ygUVRnJlZWNvZGVjYW1wIHBvaXRuZXJz
