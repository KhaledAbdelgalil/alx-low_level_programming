#include "main.h"
/**
 *   _strncpy - function that copy string into another
 *
 *  @dest: pointer to first char in destination string
 *  @src: pointer to first char in src string
 *  @n: number of bytes taken from src
 *  Return: pointer to destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i != n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i != n)
	{
		dest[i] = '\0';
	}
	return (dest);
}
