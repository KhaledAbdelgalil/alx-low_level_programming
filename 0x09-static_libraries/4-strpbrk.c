#include "main.h"
/**
 * _strpbrk - earches a string for any of a set of bytes in accept
 *
 * @s: pointer to input string s
 * @accept: pointer to input valid bytes accept
 *
 * Return:  pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
		i++;
	}
	return (NULL);
}

