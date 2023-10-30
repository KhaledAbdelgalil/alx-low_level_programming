#include "main.h"

/**
 * str_concat - returns a pointer to a newly allocated space in memory,
 * which contains a copy of both strings concanteted given as parameters.
 *
 * @str1: pointer to the first input string
 * @str2: pointer to the second input string
 * Return: pointer to the array
 */
char *str_concat(char *str1, char *str2)
{
	char *array;
	unsigned int i = 0, j = 0;
	unsigned int size1, size2;

	if (str1 == NULL && str2 == NULL)
		return (NULL);
	size1 = str1 != NULL ? strlen(str1) : 0;
	size2 = str2 != NULL ? strlen(str2) : 0;
	array = (char *) malloc(sizeof(char) * (size1 + size2 + 1));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
	{
		array[i] = str1[i];
	}

	for (j = 0; j < size2; j++)
	{
		array[i++] = str2[j];
	}

	array[i] = '\0';

	return (array);
}
