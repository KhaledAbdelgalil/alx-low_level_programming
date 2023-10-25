#include "main.h"
/**
 *factorial - get factorial of integer
 *@n: input integer
 *
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
