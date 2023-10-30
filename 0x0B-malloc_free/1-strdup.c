#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: pointer to the input string
 *
 * Return: pointer to the array
 */
char *_strdup(char *str)
{
	char *array;
	unsigned int i = 0;
	unsigned int size;

	if (str == NULL)
		return (NULL);
	size = strlen(str);
	array = (char *) malloc(sizeof(char) * (size + 1));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = str[i];
	}

	array[i] = '\0';

	return (array);
}
