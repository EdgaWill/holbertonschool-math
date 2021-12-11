#ifndef FIBONACCI_H
#define FIBONACCI_H

#include <stdlib.h>
#include <math.h>
#include <stdio.h>

/**
 * struct Fibo - struct
 * @elt: int
 * @next: pointer
 */
typedef struct Fibo
{
	int elt;
	struct Fibo *next;
} t_cell;

double gold_number(t_cell *head);
t_cell *Fibonnaci();

#endif
