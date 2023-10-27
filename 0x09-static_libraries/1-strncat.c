#include "main.h"
/**
 *   _strncat - function that concatenates two strings
 *
 *  @dest: pointer to first char in destination string
 *  @src: pointer to first char in src string
 *  @n: number of bytes taken from src
 *  Return: pointer to destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[j] != '\0')
	{
		j++;
	}
	while (i != n && src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
