#include "main.h"
/**
 * _strstr - locates a substring
 *
 * @s: pointer to input string s
 * @accept: string to be located
 *
 * Return:  pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *s, char *accept)
{
	unsigned int i = 0, j = 0, startofWindow = 0;

	while (s[i] != accept[j] && s[i] != '\0')
	{
		i++;
		startofWindow++;
	}

	while (s[i] != '\0' && accept[j] != '\0')
	{
		if (s[i] == accept[j])
		{
			i++;
			j++;
		}
		else
		{
			j = 0;
			startofWindow = i;
			while (s[i] != accept[j] && s[i] != '\0')
			{
				i++;
				startofWindow++;
			}
		}
	}
	if (accept[j] == '\0')
		return (&s[startofWindow])
	return (NULL);

}

