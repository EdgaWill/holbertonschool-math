#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct cell
{
	double elt;
	struct cell *next;
} t_cell;
