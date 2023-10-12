#include "main.h"
/**
 *  print_square - prints diagonal of length n, followed by new line.
 *  @n: length of square
 */
void print_square(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	while (n > 0)
	{
		for (i = 0; i < spaces; i++)
			_putchar('#');
		_putchar('\n');
		n--;
	}
}
