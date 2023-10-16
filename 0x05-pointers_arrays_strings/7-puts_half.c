#include "main.h"
/**
 *   puts_half -  prints second half of the string
 *
 *  @in: pointer to first char in string
 *  Return: void
 */
void puts_half(char *in)
{
	int cnt = 0;

	while (*in != '\0')
	{
		cnt++;
		in++;
	}
	cnt = cnt / 2;
	while (cnt)
	{
		in--;
		cnt--;
	}

	while (*in != '\0')
	{
		_putchar(*in);
		in++;
	}

	_putchar('\n');
}
