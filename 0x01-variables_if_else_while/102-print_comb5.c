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
	unsigned short int out1 = 0;
	unsigned short int out2 = 0;

	while (out1 != 100)
	{
		out2 = out1 + 1;
		while (out2 != 100)
		{
			putchar(out1 / 10 + 48);
			putchar(out1 % 10 + 48);
			putchar(' ');
			putchar(out2 / 10 + 48);
			putchar(out2 % 10 + 48);
			if (!(out1 == 98 && out2 == 99))
			{
				putchar(',');
				putchar(' ');
			}
			out2++;
		}
		out1++;
	}
	putchar('\n');
	return (0);
}
