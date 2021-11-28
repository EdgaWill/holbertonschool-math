#include "holberton.h"

/**
 * modulus - function that returns the modulus
 * of a given complex number
 * @c: complex
 *
 * Return: complex number
 */
double modulus(complex c)
{
	return (sqrt((c.re * c.re) + (c.im * c.im)));
}
