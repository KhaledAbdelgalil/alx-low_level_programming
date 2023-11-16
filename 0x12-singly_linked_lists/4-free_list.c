#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: void.
 */

void free_list(list_t *head)
{
	list_t *tmp = head;

	while (head)
	{
		head = head->next;
		free(tmp->str);
		free(tmp);
		tmp = head;
	}
}
