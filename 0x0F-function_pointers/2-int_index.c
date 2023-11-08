#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: input array.
 * @size: array size.
 * @cmp: pointer to the function to be used to compare values.
 *
 * Return: index of the first element to be found or -1 otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
