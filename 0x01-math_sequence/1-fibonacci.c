#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct fibo
{
	int elt;
	struct fibo *next;
} t_cell;

void push(t_cell **head_ref, double new_data)
{
	t_cell *new_node = malloc(sizeof(t_cell));

	if (new_node == NULL)
	{
		free(new_node);
		return;
	}

	new_node->elt  = new_data;

	new_node->next = (*head_ref);

	(*head_ref)    = new_node;
}

t_cell *Fibonnaci()
{
	t_cell *h;
	int i = 2;
	int x0 = 1;
	int x1 = 1;
	int x;

	h = malloc(sizeof(t_cell));

	if (h == NULL)
	{
		free(h);
		return (NULL);
	}

	h->elt = x0;

	push(&h, x1);

	while (i < 20)
	{
		x = x0 + x1;
		push(&h, x);
		x0 = x1;
		x1 = x;
		i++;
	}

	return (h);
}

double gold_number(t_cell *head)
{
	double rtn;
	double x0, x1;

	x0 = head->elt;
  
	head = head->next;
	x1 = head->elt;
  
	rtn = x1 / x0;

	return (rtn);
}
