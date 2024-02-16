/* Guard directives */
#ifndef PROBLEM1_H
#define PROBLEM1_H

/* Including necessary headers */
#include <stdio.h>

/* Macro for defining PI with limited precision */
#define PI 3.141592653589

/* Square Circumference */
double square_circ(double a);
/* Rectangle Circumference */
double rec_circ(double a, double b);
/* Circle Circumference */
double circle_circ(double R);

/* Square Area */
double square_area(double a);
/* Rectangle Area */
double rec_area(double a, double b);
/* Circle Area */
double circle_area(double R);

/* End for the #ifndef directive*/
#endif
