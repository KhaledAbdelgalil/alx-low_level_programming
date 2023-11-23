#include "main.h"

/**
 * binary_to_uint - program converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned decimal format
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ans = 0, mul = 1;
	int len = 0;

	if (b == NULL)
		return (0);
	len = strlen(b);
	len = len - 1;
	while (len >= 0)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		ans = ans + (b[len] - '0') * mul;
		mul = mul * 2;
		len--;
	}
	return (ans);
}
