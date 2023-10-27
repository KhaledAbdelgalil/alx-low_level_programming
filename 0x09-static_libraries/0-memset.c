#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: our memory
 * @b: constant byte
 * @n: the size of the memory to fill
 *
 * Return: pointer to destination.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

