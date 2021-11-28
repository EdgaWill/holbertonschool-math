#include "holberton.h"

/**
 * display_complex_number - function that displays the complex numbers
 * @c: complex
 */
void display_complex_number(complex c)
{
	char a = '+';

	if (c.im < 0)
	{
		c.im = -(c.im);
		a = '-';
	}
	if (c.re != 0 && c.im != 0)
	{
		if (c.im == 1)
			printf("%.9g %c i\n", c.re, a);
		else
			printf("%.9g %c %.9gi\n", c.re, a, c.im);
	}
	else if (c.im == 0)
		printf("%.9g\n", c.re);
	else if (c.re == 0)
	{
		if (c.im == 1)
			printf("i\n");
		else if (c.im > 1)
			printf("%.9gi\n", c.im);
		else if (c.im < 0)
			printf("%c %.9gi\n", a, c.im);
	}
}
