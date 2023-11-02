#include "main.h"
/**
 * array_range - creates an array of integers.
 * @min: minimum value in the range.
 * @max: maximum value in the range.
 *
 * Return: pointer to the created array.
 * if man > mix, returns NULL.
 * if malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
	int *out;
	int i;

	if (min > max)
		return (NULL);

	out = malloc(sizeof(int) * ((max - min) + 1));
	if (out == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		out[i] = min;

	return (out);
}
