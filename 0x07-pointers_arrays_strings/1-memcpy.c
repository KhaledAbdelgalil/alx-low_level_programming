#include "main.h"
/**
 * _memcpy - copy content of memory block to another memory block
 * @dest: our dest memory
 * @src: our src memory
 * @n: the size of the memory to fill
 *
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

