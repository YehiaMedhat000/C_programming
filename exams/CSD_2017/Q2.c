#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * base_convert - Converts num from base 10
 * to base from 2 to 16
 * @num: The number to convert
 * @base: The base to use in conversion
 * Return: String alternative for the number
 * NULL if failed
 */

char *base_convert(unsigned int num, unsigned int base);

/**
 * _strrev - Custom implementation for
 * the function strrev to reverse a string
 * @str: The string to reverse
 * Return: The reversed string
 */

char *_strrev(char *str);

/**
 * main - Entry point
 * @ac: Arguments count
 * @av: Arguments array
 * Return: 0 in success, -1 in failure
 */

int main(int ac, char **av)
{
	unsigned int num = 0;
	char *out;

	if (ac < 2)
	{
		fprintf(stderr, "Usage: ./a.out num base\n");
		return (-1);
	}

	num = strtoul(av[1], NULL, 10);
	out = _strrev(base_convert(num, (unsigned int)atoi(av[2])));
	printf("Number %s in base %s is %s\n", av[1], av[2], out);
	free(out);
	return (0);
}

char *base_convert(unsigned int num, unsigned int base)
{
	unsigned int idx = 0;
	unsigned int i = 0;
	char *out = malloc(1024);
	char *bases[] = {
		NULL, NULL,
		"01",
		"012",
		"0123",
		"01234",
		"012345",
		"0123456",
		"01234567",
		"012345678",
		"0123456789",
		"0123456789A",
		"0123456789AB",
		"0123456789ABC",
		"0123456789ABCD",
		"0123456789ABCDE",
		"0123456789ABCDEF"
	};

	if (!out)
		return (NULL);

	while (num)
	{
		idx = num % base;	
		out[i] = bases[base][idx];
		num /= base;
		i++;
	}
	return (out);
}

char *_strrev(char *str)
{
	unsigned len = strlen(str);
	unsigned middle = len / 2;
	int i = 0;
	char temp;

	while (i < middle)
	{
		temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i++] = temp;
	}
	return (str);
}
