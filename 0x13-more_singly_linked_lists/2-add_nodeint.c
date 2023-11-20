#include "lists.h"
#include <string.h>
/**
 * add_nodeint - adds a new node at the beginning
 * of a list<int> list.
 * @head: head of the linked list.
 * @n: int to store in the list.
 * Return: head node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newHead;

	newHead = malloc(sizeof(listint_t));
	if (newHead == NULL)
		return (NULL);
	newHead->n = n;
	newHead->next = *head;

	return (*head = newHead);
}
