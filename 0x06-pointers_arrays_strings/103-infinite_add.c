#include "main.h"
/**
 * infinite_add - adds two numbers
 * @n1: number one.
 * @n2: number two.
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size:
 * Return: the pointer to output.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int idx1 = 0, idx2 = 0, len1 = 0, len2 = 0, len3 = 0, idx3 = 0;
	int sumdigits = 0,  carry = 0;

	len1 = strlen(n1);
	len2 = strlen(n2);

	if (len1 > len2)
		len3 = len1 + 2;/*9+9 = 18 1 more digit, also \0*/
	else
		len3 = len2 + 2;
	if (size_r < len3)
		return (0);

	idx1 = len1 - 1;
	idx2 = len2 - 1;
	idx3 = len3 - 2;

	r[len3 - 1] = '\0';
	while (idx3 >= 0)
	{
		sumdigits = carry;
		if (idx1 >= 0)
		{
			sumdigits += n1[idx1] - '0';
		}
		if (idx2 >= 0)
		{
			sumdigits += n2[idx2] - '0';
		}
		r[idx3] = (sumdigits % 10) + 48;
		carry = sumdigits / 10;
		idx3--;
		idx1--;
		idx2--;
	}
	if (*r == '0')
		return (r + 1);
	return (r);
}
