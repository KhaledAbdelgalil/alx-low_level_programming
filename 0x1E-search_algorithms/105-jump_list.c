#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in an array of
 * integers using the Jump search algorithm
 *
 * @list: input list
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t interval_end, jump_step;
	listint_t *prev;

	if (list == NULL || size == 0)
		return (NULL);

	jump_step = (size_t)sqrt((double)size);
	interval_end = 0;

	do {
		prev = list;
		interval_end += jump_step;

		while (list->next && list->index < interval_end)
			list = list->next;

		if (list->next == NULL)
			interval_end = list->index;

		printf("Value checked at index [%d] = [%d]\n", (int)interval_end, list->n);

	} while (interval_end < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)prev->index, (int)list->index);

	while (prev && prev->index <= list->index)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}
