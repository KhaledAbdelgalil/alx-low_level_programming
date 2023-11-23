#include "main.h"
/**
 * print_binary_helper - helper function prints the binary representation
 * of a number.
 * @n: unsigned long int.
 *
 * Return: no return.
 */
void print_binary_helper(unsigned long int n)
{
	if (n)
	{
		print_binary_helper(n >> 1);
		_putchar((n & 1) + 48);
	}
}
/**
 * print_binary - function prints the binary representation
 * of a number.
 * @n: unsigned long int.
 *
 * Return: no return.
 */
void print_binary(unsigned long int n)
{
	if (n > 0)
	{
		print_binary_helper(n);
	}
	else
	{
		_putchar('0');
	}
}
