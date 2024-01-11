#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a dlistint_t
 *                            at a given index.
 * @head: A pointer to the head of the dlistint_t.
 * @index: The index of the node to be deleted
 *
 * Return: success - 1.
 *         Otherwise - -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;

	if (head == NULL || *head == NULL)
		return (-1);

	tmp = *head;
	while (index != 0 && tmp)
	{
		index--;
		tmp = tmp->next;
	}
	if (tmp == NULL)
		return (-1);
	if (*head == tmp)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	tmp->prev->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = tmp->prev;
	free(tmp);
	return (1);
}
