#include "main.h"
/**
 *   _strcat - function that concatenates two strings
 *
 *  @dest: pointer to first char in destination string
 *  @src: pointer to first char in src string
 *  Return: pointer to destination
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
