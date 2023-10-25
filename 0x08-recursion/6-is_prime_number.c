#include "main.h"
/**
 *prime_helper - help in finding if number is prime,
 *by starting by factor
 *@n: input integer
 *@factor: starting factor
 * Return: sqrt(n)
 */
int prime_helper(int n, int factor)
{
	if (factor * factor > n)
		return (1);
	else if (n % factor == 0)
		return (-1);
	return (prime_helper(n, factor + 1));
}
/**
 *is_prime_number - check if number is prime or not
 *@n: input integer
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n <= 3)
		return (1);
	return (prime_helper(n, 5));
}
