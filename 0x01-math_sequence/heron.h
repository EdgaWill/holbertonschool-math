#ifndef HERON_H
#define HERON_H

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

typedef struct cell
{
	double elt;
	struct cell *next;
} t_cell;

void push(t_cell **head_ref, double x);
t_cell *heron(double p, double x0);
void push(t_cell **head_ref, double new_data);
double gold_number(t_cell *head);   
#endif
