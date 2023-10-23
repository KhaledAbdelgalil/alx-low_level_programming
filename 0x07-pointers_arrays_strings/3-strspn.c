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
	bool stillValid = true;

	i = 0;
	while (s[i] != '\0' && stillValid)
	{
		stillValid = false;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				stillValid = true;
				break;
			}
		}
		i++;
	}
	return (i);
}

