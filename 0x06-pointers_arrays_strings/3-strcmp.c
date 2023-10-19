#include "main.h"
/**
 *   _strcmp - compare 2 strings
 *
 *  @s1: pointer to first char in 1st string
 *  @s2: pointer to first char in 2nd string
 *  Return: pointer to destination
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	
	for (; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
	}
	return (0);
}
