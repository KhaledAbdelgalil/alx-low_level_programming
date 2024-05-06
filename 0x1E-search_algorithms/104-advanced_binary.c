#include "search_algos.h"



/**
 * advanced_binary_rec - a recursive function that performs a binary search
 * for a value in a sorted array of integers
 * @array: a pointer to the first element of the array to search in
 * @min: the minimum index of the subarray to search in
 * @max: the maximum index of the subarray to search in
 * @value: the value to search for
 * Return: the index where value is located, or -1 if value is not present
 */
int advanced_binary_rec(int *array, size_t min, size_t max, int value)
{
	int currentValue;
	size_t i = min;
	size_t mid = min + (max - min) / 2;

	if (min > max)
		return (-1);
	currentValue = array[mid];
	printf("Searching in array: ");
	while (i < max)
		printf("%d, ", array[i++]);
	printf("%d\n", array[i]);
	if (currentValue == value && (mid == min || array[mid - 1] > value))
		return (mid);
	else if (currentValue >= value)
		return (advanced_binary_rec(array, min, mid, value));
	else
		return (advanced_binary_rec(array, mid + 1, max, value));
}

/**
 * advanced_binary - a function that performs a binary search for
 * a value in a sorted array of integers
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located, or -1 if value is not present
 * or if array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (advanced_binary_rec(array, 0, size - 1, value));
}
