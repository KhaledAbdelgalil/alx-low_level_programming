#include "main.h"
/**
 *   _strcmp - compare 2 strings
 *
 *  @s1: pointer to first char in 1st string
 *  @s2: pointer to first char in 2nd string
 *  Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] < s2[i])
			return (-1 * (s2[i] - s1[i]));
	}
	return (0);
}
