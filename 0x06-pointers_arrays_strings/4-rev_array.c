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
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
		i++;
	}
}
