#include "lists.h"

/**
 * free_listint2 - frees a list<int>,
 * set head = null
 * @head: pointer to head of the linked list.
 * Return: void.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;

	while (head)
	{
		head = head->next;
		free(tmp);
		tmp = head;
	}
	*head = NULL;
}
