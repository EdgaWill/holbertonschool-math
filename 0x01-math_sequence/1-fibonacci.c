#include "fibonacci.h"

/**
 * gold_number - nummber
 * @head: linked list
 *
 * Return: number
 */
double gold_number(t_cell *head)
{
	double ab, ac;

	ab = head->elt;
	head = head->next;
	ac = head->elt;
	return (ab / ac);
}

/**
 * Fibonnaci - Fibonacci sequence is defined
 *
 * Return: number
 */
t_cell *Fibonnaci()
{
	t_cell *head = NULL, *new;
	int ab = 0, ac = 1, cd = 0, de = 20;

	while (lim)
	{
		ab = ac + cd;

		new = malloc(sizeof(t_cell));
		new->elt = ac;
		new->next = head;
		head = new;
		ab = ac;
		ac = ab;
		de--;
	}
	return (head);
}
