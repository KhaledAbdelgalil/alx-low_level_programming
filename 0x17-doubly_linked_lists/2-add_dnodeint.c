#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of list.
 * @head: A pointer to the head of the dlistint_t list.
 * @n: The integer for the new node.
 *
 * Return: Failure - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->next = *head;
	new->n = n;
	if (*head)
		(*head)->prev = new;
	*head = new;
	return (new);
}
