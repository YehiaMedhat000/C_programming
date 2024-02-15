#include "problem2.h"

/**
 * main - Program to convert Temprature from
 * Celsius to Kelvin and Fahrenheit
 * @argv: Arguments array
 * @argc: Arguments count
 * Return: Success (0), failure (-1)
 */

int main(int argc, char **argv)
{
	double temp;

	/* Check if any argument is passed */
	if (argc < 2)
	{
		printf("ERROR: Invalid number of arguments\n");
		printf("USE: ./a.out arg1 arg2 ...\n");
		return (-1);
	}

	/* Converting string argument to double */
	temp = atof(argv[1]);

	printf("Temperature in Fahernheit: %lf\n", CtoF(temp));
	printf("Temperature in Kelvin: %lf\n", CtoK(temp));
	return (0);
}
