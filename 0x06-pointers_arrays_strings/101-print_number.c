#include "main.h"
/**
 *  print_number - print an integer number.
 *
 *  @n: input integer
 *  Return: void, just print the input
 */
void print_number(int n)
{
	unsigned int positive_n, tmp = 0, position = 1;

	positive_n = n;

	if (n < 0)
	{
		_putchar('-');
		positive_n = n * -1;
	}
	tmp = positive_n;
	while (tmp > 9)
	{
		position = position * 10;
		tmp = tmp / 10;
	}
	for (; position >= 1; position /= 10)
	{
		_putchar((positive_n / position) % 10 + '0');
	}
}
