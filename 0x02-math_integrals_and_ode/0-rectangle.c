#include <stdio.h>
#include <math.h>

/**
 * rectangle_method - rectangle_method
 * @a: double
 * @b: double
 * @steps: int
 * Return: double
 */

double rectangle_method(double a, double b, int steps)
{
	int x;
	double ab, cd, su, o;

	ab = (b - a) / steps;
	su = 0.0;
	o = a;

	for (x = 1; x <= steps; x++)
	{
		cd = 1 / (1 + (o * o));
		su += ab * cd;
		o += ab;
	}
	return (su);
}
