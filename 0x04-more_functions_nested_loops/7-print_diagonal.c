#include "main.h"
/**
 *  print_diagonal - prints diagonal of length n, followed by new line.
 *  @n: length of diagonal
 */
void print_diagonal(int n)
{
	int spaces = 0, i = 0;

	while (n > 0)
	{
		for (i = 0; i < spaces; i++)
			_putchar(' ');
		spaces++;
		_putchar('\\');
		_putchar('\n');
		n--;
	}

	_putchar('\n');
}
