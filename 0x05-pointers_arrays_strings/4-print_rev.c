#include "main.h"
/**
 *   print_rev -  prints a string, in reverse, followed by a new line
 *
 *  @in: pointer to first char in string
 *  Return: void
 */
void print_rev(char *in)
{
	int cnt = 0;

	while (*in != '\0')
	{
		cnt++;
		in++;
	}
	cnt--;
	in--;
	while (cnt >= 0)
	{
		_putchar(*in);
		cnt--;
		in--;
	}

	_putchar('\n');
}
