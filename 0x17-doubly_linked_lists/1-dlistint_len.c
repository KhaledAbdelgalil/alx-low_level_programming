#include "lists.h"

/**
 * dlistint_len - counts number of nodes in list.
 * @h: The head of the dlistint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes_cnt = 0;

	while (h)
	{
		h = h->next;
		nodes_cnt++;
	}

	return (nodes_cnt);
}
