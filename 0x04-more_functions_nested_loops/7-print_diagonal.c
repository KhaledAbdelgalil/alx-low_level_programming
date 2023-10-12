#include "main.h"
/**
 *  print_diagonal - prints diagonal of length n, followed by new line.
 *  @n: lengthe of diagonal
 */
void  print_diagnal(int n)
{
	int spaces = 0, i = 0;

	while (n > 0)
	{
		for (i = 0; i < spaces; i++)
			_putchar(' ');
		spaces++;
		_putchar('\');
		n--;
	}

	_putchar('\n');
}
