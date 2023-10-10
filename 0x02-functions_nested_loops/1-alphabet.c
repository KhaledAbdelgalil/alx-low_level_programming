#include "main.h"
/**
 *  print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 */
void  print_alphabet(void)
{
	char out = 97;

	while (out != 97 + 26)
	{
		putchar(out++);
	}

	putchar('\n');
}
