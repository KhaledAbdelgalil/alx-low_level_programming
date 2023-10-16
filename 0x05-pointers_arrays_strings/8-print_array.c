#include "main.h"
/**
 *   print_array -  prints elements of an array
 *
 *  @in: pointer to first element in array
 *  @n:  number of elements to be printed(or size of array)
 *  Return: void
 */
void print_array(int *in, int n)
{
	int i = 1;

	if (n <= 0)
	{
		printf("\n");
		return;
	}
	printf("%d", in[0]);
	for (; i < n; i++)
		printf(", %d", in[i]);

	printf("\n");
}
