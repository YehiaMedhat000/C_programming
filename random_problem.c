#include <string.h>


int main()
{
	char a[][20] = {"Hello", "and", "Good Bye", "."};
	char *b[4];
	int i;

	for (i = 0; i < 4; i++)
	{
		b[i] = malloc(strlen(a[i] + 1));
		strcpy(b[i], a[i]);
	}
	printf("%s\n", *b + 1);
	printf("%s\n", *(b + 1));
	printf("%s\n", *(b + 2) + 1);
	printf("%s\n", b[0][1]);

	char *pt = *(b + 2) + 2;
	*(pt--) = '0';
	*(pt--) = '0';
	printf("%s\n", pt);

	return (0);
}
