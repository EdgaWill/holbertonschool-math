#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct cell
{
	double elt;
	struct cell *next;
} t_cell;

void push(t_cell **head_ref, double x);
t_cell *heron(double p, double x0);
#endif
