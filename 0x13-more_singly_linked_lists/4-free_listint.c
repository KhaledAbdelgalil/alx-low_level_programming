#include "lists.h"

/**
 * free_list - frees a list<int>
 * @head: head of the linked list.
 * Return: void.
 */

void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	while (head)
	{
		head = head->next;
		free(tmp);
		tmp = head;
	}
}
