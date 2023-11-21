#include "lists.h"

/**
 * free_listint2 - frees a list<int>,
 * set head = null
 * @head: pointer to head of the linked list.
 * Return: void.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp = *head, *listHead = *head;

	while (listHead)
	{
		listHead = listHead->next;
		free(tmp);
		tmp = listHead;
	}
	*head = NULL;
}
