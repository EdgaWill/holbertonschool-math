#include "fibonacci.h"

/**
 * gold_number - nummber
 * @head: linked list
 *
 * Return: number
 */
double gold_number(t_cell *head)
{
	double f_c, f_b;

	f_c = head->elt;
	head = head->next;
	f_b = head->elt;
	return (f_c / f_b);
}

/**
 * Fibonnaci - Fibonacci sequence is defined
 *
 * Return: number
 */
t_cell *Fibonnaci()
{
	t_cell *head = NULL, *new;
	int f_a = 0, f_c = 1, f_b = 0, lim = 20;

	while (lim)
	{
		f_a = f_c + f_b;

		new = malloc(sizeof(t_cell));
		new->elt = f_c;
		new->next = head;
		head = new;
		f_b = f_c;
		f_c = f_a;
		lim--;
	}
	return (head);
}
