#include "main.h"

/**
 * flip_bits - fn returns the number of bits you would
 * need to flip to get from one number to another
 * @n: number one.
 * @m: number two.
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbits = 0;
	unsigned long int diff = n ^ m;

	while (diff)
	{
		if (diff & 1)
			nbits++;
		diff = diff >> 1;
	}
	return (nbits);
}
