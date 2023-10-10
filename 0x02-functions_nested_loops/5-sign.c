#include "main.h"

/**
 *  print_sign - print sign of a number.
 *  Return: -1,0,1 based on sign of the number
 *  @input: the number
 */
int print_sign(int input)
{
	if (input == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (input > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
