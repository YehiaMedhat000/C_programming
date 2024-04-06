#include <stdio.h>
#include <stdlib.h>

/**
 * fib - Fibnacci terms generator
 * @n: The index of the term to generate
 * Return: The generated fibonacci term
 */

unsigned int fib(unsigned int n);

/**
 * main - Entry point
 * @ac: Arguments count
 * @av: Arguments array
 * Return: 0 in success, -1 otherwise
 */

int main(int ac, char **av)
{
	unsigned int i = 1;
	unsigned int n = 0;

	if (ac < 2)
	{
		fprintf(stderr, "Usage: ./a.out arg_1 arg_2 ...\n");
		return (-1);
	}

	while (i < ac)
	{
		n = strtoul(av[i], NULL, 10);
		printf("fib(%u) = %u\n", n, fib(n));
		i++;
	}

	return (0);
}

unsigned int fib(unsigned int n)
{
	unsigned int t1 = 1;
	unsigned int t2 = 1;
	unsigned int temp;

	n -= 2;
	while (n--)
	{
		temp = t2;
		t2 = t1 + t2;
		t1 = temp;
	}

	return (t2);
}
