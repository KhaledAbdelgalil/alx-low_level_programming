#include "main.h"
/**
 * _print_rev_recursion - print a string in reverse order
 *@s: pointer to first char in string
 *
 * Return: void just print
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}
