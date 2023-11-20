#include "lists.h"

/**
 * listint_len - return count of elements of a list<int>.
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	for (; h; h = h->next, nodes++)
		(void)h;
	return (nodes);
}
