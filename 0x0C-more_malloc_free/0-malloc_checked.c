#include "main.h"
/**
 * malloc_checked - allocates memory.
 * @b: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
void *malloc_checked(unsigned int b)
{
	char *out;

	out = malloc(b);
	if (out == NULL)
		exit(98);
	return (out);
}
