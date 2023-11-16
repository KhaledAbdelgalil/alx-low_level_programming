#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds a new node at the end
 * of the input list.
 * @head: head of the list.
 * @str: string to store in the list.
 * Return: the head node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *tempNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = strlen(str);
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
