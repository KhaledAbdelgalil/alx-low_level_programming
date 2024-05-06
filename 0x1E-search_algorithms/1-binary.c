#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t min = 0, max = size - 1, mid = (max - min) / 2;

	if (!array)
		return (-1);

	while (min <= max)
	{
		int currentValue = array[mid];
		size_t i = min;

		printf("Searching in array: ");
		while (i < max)
			printf("%d, ", array[i++]);
		printf("%d\n", array[i]);
		if (currentValue > value)
			max = mid - 1;
		else if (currentValue < value)
			min = mid + 1;
		else
			return (mid);
		mid = min + (max - min) / 2;
	}
	return (-1);
}
