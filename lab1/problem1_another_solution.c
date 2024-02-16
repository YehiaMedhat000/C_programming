#include "problem1.h"

/* Important
 * Assuming you're using command line gcc
 * you have to pass the file containing definitions of the functions to the compiler to compile correctly
 * otherwise, it will fail, because it cannot find the functions referred to in this file
 */

/**
* main - Program to for problem 1
* Return: Always (0)
*/

int main()
{
	double square_side;
	double rec_a;
	double rec_b;
	double radius;

	/* For square */
	printf("Enter the side length of the square: ");
	/* Using scanf to get input from the user*/
	scanf("%lf", &square_side);
	printf("The square circumference: %lf\n", square_circ(square_side));
	printf("The square area: %lf\n", square_area(square_side));

	/* For rectangle */
	printf("Enter first side length of the rectangle: ");
	scanf("%lf", &rec_a);
	printf("Enter second side length of the rectangle: ");
	scanf("%lf", &rec_b);
	printf("The rectangle circumference: %lf\n", rec_circ(rec_a, rec_b));
	printf("The rectangle area: %lf\n", rec_area(rec_a, rec_b));

	/* For circle */
	printf("Enter the radius of the circle: ");
	scanf("%lf", &radius);
	printf("The circle circumference: %lf\n", circle_circ(radius));
	printf("The circle area: %lf\n", circle_area(radius));

	return (0);
}

