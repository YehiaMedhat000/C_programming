#include <stdio.h>

/* Function to reverse arr[] from start to end */
void reverseArray(int arr[], int start, int end)
{
	int temp;

	while (start <= end)
	{
		temp = arr[start]; // line (d)
		arr[start] = arr[end];
		arr[end] = temp;
		end -= 1; // line (e)
		start++; // line (f)
	}
}

/* Utility that prints out an array on a line */
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i <= size; i++)
		printf("%d", arr[i]);
	printf("\n");
}

/* Driver function to test above functions */
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6};

	// get array size
	int n = sizeof(arr) / sizeof(int);

	// Call the reverse function
	reverseArray(arr, 0, n - 1);
	// Call the print function
	printArray(arr, n - 1);
	return (0);
}
