#include "heron.h"

/**
 * heron - function that return the Heron sequence until
 * having convergence with an error less or equal
 * @p: double
 * @x0: double
 *
 * Return: single linked list;
 */
t_cell *heron(double p, double x0)
{
	double a = 0, _error = 0;

	t_cell *head = NULL, *new = NULL, *tail;

	new = malloc(sizeof(t_cell));
	if (!new)
		return (NULL);
	a = x0;

	head = new;
	new->elt = a;
	new->next = NULL;
	_error = ((a * a) - p);
	_error = (_error >= 0) ? _error : -(_error);
	if (_error <= 0.0000001)
	return (head);

	a = (0.5) * (x0 + (p / x0));
	head = heron(p, a);
	tail = head;
	while (tail->next)
		tail = tail->next;
	tail->next = new;

	return (head);
}
