#include "main.h"
/**
 * _puts - print a string
 *@s: pointer to first char in string
 *
 * Return: Always 0.
 */
void _puts(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts(s + 1);
}
