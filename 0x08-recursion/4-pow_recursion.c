#include "main.h"
/**
 *_pow_recursion - the value of x raised to the power of y
 *@x: input base integer
 *@y: input power integer
 * Return: x^y
 */
int _pow_recursion(int x, int y)
{
	int temp;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y % 2 == 0)
	{
		temp = _pow_recursion(x, y / 2);
		return (temp * temp);
	}
	temp = _pow_recursion(x, (y - 1) / 2);
	return (temp * temp * x);

}
