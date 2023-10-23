#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 *
 * @a: pointer to square as 1d array
 * @size: size of square
 * Return: void , just print it
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;
	int step = 0;
	int n1 = 0;
	int n2 =  size - 1;

	for (i = 0; i < size; i++)
	{
		sum1 += a[n1 + step];
		sum2 += a[n2 - step];
		step++;
		n1 += size;
		n2 += size;
	}
	printf("%d, %d\n", sum1, sum2);
}
