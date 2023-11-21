#include "lists.h"

/**
 * sum_listint - program returns the sum of all the data (n) of
 * a linked list<int>.
 * @h: head of a list.
 *
 * Return: sum of all the data (n).
 */
int sum_listint(listint_t *h)
{
	int sum  = 0;

	while (h)
	{
		sum += h->n;
		h = h->next;
	}
	return (sum);
}
