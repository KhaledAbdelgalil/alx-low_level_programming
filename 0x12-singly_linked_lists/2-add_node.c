#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: head node.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newHead;
	size_t strLen;

	newHead = malloc(sizeof(list_t));
	if (newHead == NULL)
		return (NULL);
	newHead->str = strdup(str);

	strLen = strlen(str);

	newHead->len = strLen;
	newHead->next = *head;

	return (*head = newHead);
}
