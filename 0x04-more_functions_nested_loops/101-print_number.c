#include "main.h"
/**
 *  print_number - prints the input number.
 *  @n: the input number.
 */
void print_number(int n)
{
	unsigned int abs_n = n;

	if (n < 0)
	{
		abs_n = -1 * n;
		_putchar('-');
	}

	if (abs_n > 9)
	{
		print_number(abs_n / 10);
	}

	_putchar(abs_n % 10 + 48);
}
