#include "lists.h"
/**
 * find_listint_loop_helper - Finds the start of the loop in a linked list
 * @head: A pointer to the head of the linked list
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
const listint_t *find_listint_loop_helper(const listint_t *head)
{
        const listint_t *slow = head, *fast = head;

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
 * print_listint_safe - prints a linked list.
 * @head: head of a list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	int first = 0;
	void *loopStart = (void *)find_listint_loop_helper(head);

	while (head)
	{
		if ((void *)head == loopStart && first)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
		else if ((void *)head == loopStart)
		{
			first = 1;
		}
		printf("[%p] %d\n", (void *)head, head->n);
		nodes++;
		head = head->next;
	}
	return (nodes);
}
