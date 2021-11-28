#include "holberton.h"
/**
 * argument - function that returns the argument
 * of a given complex number
 * @c: complex
 *
 * Return: complex number.
 */
double argument(complex c)
{
	if (c.re != 0)
		return (atan(c.im / c.re));
	else
		return (0);
}
