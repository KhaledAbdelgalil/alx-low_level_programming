#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a linked list<int>.
 * @head: head of a list.
 * @idx: index of the node in the list
 * deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
	listint_t *prev, *tmp;
	int ret = 1;

	if (head == NULL)
		return (-1);
	if (idx == 0)
	{
		if (*head)
		{
			tmp = *head;
			*head = (*head)->next;
			free(tmp);
			return (1);
		}
		else
		{
			return (-1);
		}
	}
	else
	{
		prev = *head;
		idx--;
		while (prev && idx)
		{
			prev = prev->next;
			idx--;
		}
		if (prev && idx == 0)
		{
			if (prev->next)
			{
				tmp = prev->next;
				prev->next = prev->next->next;
				free(tmp);
			}
			else
			{
				ret = -1;
			}
		}
		else
		{
			ret = -1;	
		}
	}
	return (ret);
}
