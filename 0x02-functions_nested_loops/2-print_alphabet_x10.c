#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times.
 */

void  print_alphabet_x10(void)
{
	char cnt = 10;

	while (cnt--)
	{
		char out = 97;

		while (out != 97 + 26)
		{
			putchar(out++);
		}
		putchar('\n');
	}
}
