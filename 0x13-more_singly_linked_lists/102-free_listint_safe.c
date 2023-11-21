#include "lists.h"
/**
 * find_listint_loop_helper2 - Finds the start of the loop in a linked list
 * @head: A pointer to the head of the linked list
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop_helper2(listint_t *head)
{
	listint_t *slow = head, *fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
	}
	return (NULL);
}
/**
 * free_listint_safe - frees a linked list<int>.
 * @head: head of a list.
 *
 * Return: number of nodes in the list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0;
	int first = 0;
	void *loopStart;
	listint_t *head, *tmp;

	if (h == NULL)
		return (0);
	head = *h;
	loopStart = (void *)find_listint_loop_helper2(head);
	while (head)
	{
		tmp = head->next;
		if ((void *)head == loopStart && first)
		{
			break;
		}
		else if ((void *)head == loopStart)
		{
			first = 1;
		}
		free(head);
		nodes++;
		head = tmp;
	}
	*h = NULL;
	return (nodes);
}
