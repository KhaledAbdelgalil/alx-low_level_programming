#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size), idx = 0, old_idx = 0;

	if (array == NULL)
		return (-1);
	while (idx < size && array[idx] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		old_idx = idx;
		idx += jump;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", old_idx, idx);
	if (idx >= size)
		idx = size - 1;
	while (old_idx <= idx)
	{
		printf("Value checked array[%lu] = [%d]\n", old_idx, array[old_idx]);
		if (array[old_idx] == value)
			return (old_idx);
		old_idx++;
	}
	return (-1);
}
