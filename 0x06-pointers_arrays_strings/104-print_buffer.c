#include "main.h"
/**
 * print_buffer - prints a buffer
 * @b: buffer.
 * @size: size of buffer.
 * Return: no return.
 */
void print_buffer(char *b, int size)
{
	int i, j, k;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
		for (i = 0; i < size; i = i + 10)
		{
			printf("%.8x:", i);
			k = i;
			while (k < i + 10)
			{
				if (k % 2 == 0)
					printf(" ");
				if (k < size)
					printf("%.2x", *(b + k));
				else
					printf("  ");
				k++;
			}
			printf(" ");
			j = i;
			while (j < i + 10)
			{
				if (j >= size)
					break;
				if (*(b + j) < 32 || *(b + j) > 126)
				{
					/*characters from space (32) to tilde (126)*/
					printf("%c", '.');
				}
				else
					printf("%c", *(b + j));
				j++;
			}
			printf("\n");
		}
}
