#include "lists.h"
#include <string.h>
/**
 * add_nodeint_end - adds a new node at the end
 * of the input list<int>.
 * @head: head of the list.
 * @n: int to store in the list.
 * Return: the head node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *tempNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	tempNode = *head;

	if (tempNode == NULL)
	{
		*head = newNode;
	}
	else
	{
		while (tempNode->next)
			tempNode = tempNode->next;
		tempNode->next = newNode;
	}

	return (newNode);
}
