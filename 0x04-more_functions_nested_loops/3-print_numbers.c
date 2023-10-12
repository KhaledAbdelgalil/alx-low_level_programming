#include "main.h"
/**
 *  print_numbers - prints from 0 to 9, followed by a new line.
 */
void  print_numbers(void)
{
	char out = 48;

	while (out != 58)
	{
		_putchar(out++);
	}

	_putchar('\n');
}
