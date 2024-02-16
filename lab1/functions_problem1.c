#include "problem1.h"

/* Functions' definition */

/**
* square_circ - Computes circumference of a square
* @a: Side length of the square
* Return: Circumference of the square
*/

double square_circ(double a)
{
	return (a * 4);
}

/**
* rec_circ - Computes circumference of a rectangle
* @a: First side length of the rectangle
* @b: Second side length of the rectangle
* Return: Circumference of the rectangle
*/

double rec_circ(double a, double b)
{
	return ((a + b) * 2);
}

/**
* circle_circ - Computes circumference of a circle
* @R: Radius of the circle
* Return: Circumference of the circle
*/

double circle_circ(double R)
{
	return (2 * PI * R);
}

/**
* square_area - Computes area of a square
* @a: Side length of the square
* Return: Area of the square
*/

double square_area(double a)
{
	return (a * a);
}

/**
* rec_area - Computes area of a rectangle
* @a: First side length of the rectangle
* @b: Second side length of the rectangle
* Return: Area of the rectangle
*/

double rec_area(double a, double b)
{
	return (a * b);
}

/**
* circle_area - Computes area of a circle
* @R: Radius of the circle
* Return: Area of the circle
*/

double circle_area(double R)
{
	return (PI * R * R);
}
