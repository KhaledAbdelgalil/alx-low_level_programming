#include "main.h"

/**
 * clear_bit - function clear the value of a bit to 0
 * at a given index.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	(*n) = ~(1 << index) & (*n);
	return (1);
}
