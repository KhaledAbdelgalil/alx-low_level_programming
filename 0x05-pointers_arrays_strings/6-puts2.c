#include "main.h"
/**
 *   puts2 - prints even characters of a string, followed by a new line.
 *
 *  @in: pointer to first char in string
 *  Return: void
 */
void puts2(char *in)
{
	int i = 0;

	while (*in != '\0')
	{
		if (i % 2 == 0)
			_putchar(*in);
		in++;
		i++;
	}
	_putchar('\n');
}
