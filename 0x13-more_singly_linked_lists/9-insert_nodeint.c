#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node
 * at a given index.
 * @head: head of a list.
 * @idx: index of the list where the new node is
 * added.
 * @n: integer element.
 *
 * Return: the address of the new node, or NULL if it
 * failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *tmp;

	if (head == NULL)
		return (NULL);
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = *head;
		(*head) = newNode;
	}
	else
	{
		tmp = *head;
		idx--;
		while (tmp && idx)
		{
			tmp = tmp->next;
			idx--;
		}
		if (tmp && idx == 0)
		{
			newNode->next = tmp->next;
			tmp->next = newNode;
		}
		else
		{
			free(newNode);
			newNode = NULL;
		}
	}
	return (newNode);
}
