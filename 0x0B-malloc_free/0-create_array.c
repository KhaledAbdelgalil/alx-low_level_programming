#include "main.h"

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 *
 * @size: size of the array to create
 * @c: char to initialize the array with
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	array = (char *) malloc(sizeof(char) * size);

	if (array == NULL)
		return (0);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	array[i] = '\0';

	return (array);
}
