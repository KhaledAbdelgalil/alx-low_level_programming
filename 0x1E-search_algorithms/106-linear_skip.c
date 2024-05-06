#include "search_algos.h"

/**
 * linear_skip - searches for a value in a skip list
 *
 * @list: input list
 * @value: value to search in
 * Return: index of the number
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *list_jump_end;

	if (list == NULL)
		return (NULL);
	list_jump_end = list;
	do {
		list = list_jump_end;
		list_jump_end = list_jump_end->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)list_jump_end->index, list_jump_end->n);
	} while (list_jump_end->express && list_jump_end->n >= value);
	if (list_jump_end->express == NULL)
	{
		list = list_jump_end;
		while (list_jump_end->next)
			list_jump_end = list_jump_end->next;
	}
	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)list_jump_end->index);
	while (list != list_jump_end->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}
	return (NULL);
}
