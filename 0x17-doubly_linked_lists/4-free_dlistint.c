#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: head of the linked list.
 * Return: void.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	while (head)
	{
		head = head->next;
		free(tmp);
		tmp = head;
	}
}
