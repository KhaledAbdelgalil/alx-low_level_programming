#include "main.h"

/**
 *  print_last_digit - print last_digit of a number.
 *  Return: last_digit of the number
 *  @input: the number
 */
int print_last_digit(int input)
{
	if (input < 0)
		input = -1 * input;
	_putchar(input % 10 + 48);
	return (input % 10);
}
