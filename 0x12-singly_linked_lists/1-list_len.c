#include "lists.h"
/**
 * list_len - get list length.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t count;

	for (count = 0; h; count++)
	{
		h = h->next;
	}
	return (count);
}
