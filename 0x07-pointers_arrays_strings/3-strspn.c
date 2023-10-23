#include "main.h"
/**
 * _strspn - calculates the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 *
 * @s: pointer to input string s
 * @accept: pointer to input valid bytes accept
 *
 * Return: number of bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	int stillValid = 1;

	i = 0;
	while (s[i] != '\0')
	{
		stillValid = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				stillValid = 1;
				break;
			}
		}
		if (!stillValid)
			break;
		i++;
	}
	return (i);
}

