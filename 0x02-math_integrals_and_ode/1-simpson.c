#include <stdio.h>
#include <stdlib.h>
#define f(x) (1 / (1 + x * x))
/**
 * simpson - the Simpson Method and use it to calculate
 * @a: double
 * @b: double
 * @steps: int
 * Return: double
 */

double simpson(double a, double b, int steps)
{
	double su, ab, ac;
	int i;

	su = 0.0;
	ac = (b - a) / steps;

	for (i = 1; i <= steps - 1; i++)
	{
		ab = a + i * ac;
		if (i % 2 == 0)
		{
			su += 2 * f(ab);
		}
		else
		{
			su += 4 * f(ab);
		}
	}
	su += 1 * f(a) + f(b);
	su = su * (ac / 3);

	return (su);
}
