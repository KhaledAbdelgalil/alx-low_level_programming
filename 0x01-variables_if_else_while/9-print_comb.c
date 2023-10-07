#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned short int out = 48;

	while (out != 58)
	{
		putchar(out);
		if (out != 57)
		{
			putchar(',');
			putchar(' ');
		}
		out++;
	}
	putchar('\n');
	return (0);
}
