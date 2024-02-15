#include <stdio.h>
#include <stdlib.h>

/**
 * sum_digits - Non-destructive functions that
 * Adds up the digits of a number
 * @num: The number passed
 * Return: The summation of digits
 */
unsigned long long int sum_digits(const unsigned long long int num);

/**
 * main - Program to get the sum of the digits
 * of any base 10 number
 * @argc: Arguments count
 * @argv: Arguments array
 * Return: Success (0), failure (-1)
 */

int main(int argc, char **argv)
{
	/* Using unsigned long long for most extreme cases */
	unsigned long long int num;

	/* Check if any arguments are passed */
	if (argc < 2)
	{
		printf("ERROR: Invalid number of arguments\n");
		printf("USE: ./a.out arg1 arg2 ...\n");
		return (-1);
	}

	/* Convert string argument to a long long integer */
	num = atoll(argv[1]);

	printf("The summation of the digits is: %d\n", sum_digits(num));
	return (0);
}

unsigned long long int sum_digits(const unsigned long long int num)
{
	unsigned long long int numcpy = num;
	unsigned long long int sum = 0;

	while (numcpy)
	{
		/* Getting the first digit by modulo operator % */
		sum += numcpy % 10;
		/* Deleting that digit from the number */
		numcpy /= 10;
	}
	return (sum);
}
