#include "main.h"
/**
 *  print_most_numbers - prints 0,1,3,5,6,7,8,9, followed by a new line.
 */
void  print_most_numbers(void)
{
	char out = 48;

	while (out != 58)
	{
		if (out != 60 && out != 62)
			_putchar(out++);
	}

	_putchar('\n');
}
