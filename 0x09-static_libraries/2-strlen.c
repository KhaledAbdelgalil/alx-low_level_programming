#include "main.h"
/**
 *   _strlen - calculates length of input string
 *
 *  @in: pointer to first char in string
 *  Return: length of string
 */
int _strlen(char *in)
{
	int cnt = 0;

	while (*in != '\0')
	{
		cnt++;
		in++;
	}

	return (cnt);
}
