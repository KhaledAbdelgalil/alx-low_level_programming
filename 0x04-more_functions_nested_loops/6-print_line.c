#include "main.h"
/**
 *  print_line - prints line, followed by new line.
 *  @n: lengthe of line
 */
void  print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}

	_putchar('\n');
}
