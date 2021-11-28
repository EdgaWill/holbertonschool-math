#include "holberton.h"
/**
 * division - function that performs the division
 * operation to complex numbers
 * @c1: complex number
 * @c2: complex number
 * @c3: complex number
 */
void division(complex c1, complex c2, complex *c3)
{
	c3->re = ((c1.re * c2.re) + (c1.im * c2.im));
	c3->re /= ((c2.re * c2.re) + (c2.im * c2.im));

	c3->im = ((c1.re * -c2.im) + (c1.im * c2.re));
	c3->im /= ((c2.re * c2.re) + (c2.im * c2.im));
}
