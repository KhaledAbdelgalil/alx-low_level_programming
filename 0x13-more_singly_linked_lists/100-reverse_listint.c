#include "lists.h"

/**
 * reverse_listint - reverses a linked list<int>.
 * @head: head of a list.
 *
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr, *beforeCurr;

	if (head == NULL)
		return (NULL);
	curr = *head;
	beforeCurr = NULL;
	while (curr)
	{
		(*head) = (*head)->next;
		curr->next = beforeCurr;
		beforeCurr = curr;
		curr = *head;
	}
	return (*head = beforeCurr);
}
