#include "main.h"
/**
 *  print_triangle - prints triangle of size n, followed by new line.
 *  @n: size of triangle
 */
void print_triangle(int n)
{
	int i = 0;
	int spaces = n;
	int side = n;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (n > 0)
	{
		for (i = 1; i < spaces; i++)
			_putchar(' ');
		for (i = spaces; i <= side; i++)
			_putchar('#');
		_putchar('\n');
		n--;
		spaces--;
	}
}
