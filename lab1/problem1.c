#include <stdio.h>

/* Macro for defining PI with limited precision */
#define PI 3.141592653589


/* Square Circumference */
double square_circ(double a);
/* Rectangle Circumference */
double rec_circ(double a, double b);
/* Circle Circumference */
double circle_circ(double R);

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

	/* For rectangle */
	printf("Enter first side length of the rectangle: ");
	scanf("%lf", &rec_a);
	printf("Enter second side length of the rectangle: ");
	scanf("%lf", &rec_b);
	printf("The rectangle circumference: %lf\n", rec_circ(rec_a, rec_b));

	/* For circle */
	printf("Enter the radius of the circle: ");
	scanf("%lf", &radius);
	printf("The circle circumference: %lf\n", circle_circ(radius));

	return (0);
}

/* Functions' definition */
double square_circ(double a)
{
	return (a * 4);
}

double rec_circ(double a, double b)
{
	return ((a + b) * 2);
}

double circle_circ(double R)
{
	return (2 * PI * R);
}
