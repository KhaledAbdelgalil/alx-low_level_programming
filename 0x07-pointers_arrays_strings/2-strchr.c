#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer to input string
 * @c: char to find.
 *
 * Return: pointer to char if found, and NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i = i + 1;
	}
	return (NULL);
}

