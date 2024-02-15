#include "problem2.h"

/**
 * CtoK - Converts temperature from Celsius scale
 * to Kelvin scale
 * @temp: The temperature to be converted
 * Return: The converted temperature in Kelvin scale
 */

double CtoK(double temp)
{
	return (temp + 273.15);
}

/**
 * CtoF - Converts temperature from Celsius scale
 * to Fahrenheit scale
 * @temp: The temperature to be converted
 * Return: The converted temperature in Fahrenheit scale
 */

double CtoF(double temp)
{
	return (1.8 * temp + 32.0);
}
