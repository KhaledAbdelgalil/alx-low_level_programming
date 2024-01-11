#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of list.
 * @head: A pointer to the head of the dlistint_t list.
 * @n: The integer for the new node.
 *
 * Return: Failure - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tail;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	tail = *head;
	while (tail->next)
		tail = tail->next;
	tail->next = new;
	new->prev = tail;
	return (new);
}
