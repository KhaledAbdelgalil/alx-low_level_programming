#include "main.h"
/**
 *  reverse_array -  reverse arry inplace
 *
 *  @a: pointer to first int in array
 *  @n: size of array
 *  Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;

	while (i < n / 2)
	{
		tmp = in[i];
		in[i] = in[n - i - 1];
		in[n - i - 1] = tmp;
		i++;
	}
}
