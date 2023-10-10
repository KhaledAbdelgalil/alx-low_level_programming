#include "main.h"

/**
 *  _abs - compute absolute value of a number.
 *  Return: absolute value of the number
 *  @input: the number
 */
int _abs(int input)
{
	if (input >= 0)
	{
		return (input);
	}
	else
	{
		_putchar('-');
		return (-1 * input);
	}
}
