#include "main.h"
/**
 *   _puts - prints a string, followed by a new line, to stdout
 *
 *  @in: pointer to first char in string
 *  Return: void
 */
void _puts(char *in)
{
	while (*in != '\0')
	{
		_putchar(*in);
		in++;
	}
}
