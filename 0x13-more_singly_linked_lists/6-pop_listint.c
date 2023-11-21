#include "lists.h"
#include <string.h>
/**
 * pop_listint - pop first node in list<int>,
 * and return its value.
 * @head: pointer head of the linked list.
 * Return: head node int data.
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (!head || *head == NULL)
		return (0);
	tmp = *head;
	*head = (*head)->next;
	n = tmp->n;
	free(tmp);
	return (n);
}
