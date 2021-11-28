#include "holberton.h"
/**
 * complex_from_mod_arg - function that update the real and the
 * imaginary parts of a complex number given its modulus and arguments
 * @m: double
 * @arg: double
 * @c3: complex
 */
void complex_from_mod_arg(double m, double arg, complex *c3)
{
	double x, y;

	x = sin(arg) * m;
	y = cos(arg) * m;
	c3->re = y;
	c3->im = x;
}
