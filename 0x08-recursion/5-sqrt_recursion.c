#include "main.h"
/**
 *sqrt_helper - help in finding square root of n >= 4,
 *by starting by guess square root
 *@n: input integer
 *@guess: starting guess
 * Return: sqrt(n)
 */
int sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess < n)
		return (sqrt_helper(n, guess + 1));
	return (-1);
}
/**
 *_sqrt_recursion - the sqrt of integer
 *@n: input integer
 * Return: sqrt(n)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (n);
	return (sqrt_helper(n, 2));
}
