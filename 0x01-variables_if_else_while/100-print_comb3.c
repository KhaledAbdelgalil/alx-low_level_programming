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
	unsigned short int out1 = 48;
	unsigned short int out2;

	while (out1 != 57)
	{
		out2 = out1 + 1;
		while (out2 != 58)
		{
			putchar(out1);
			putchar(out2++);
			if (!(out1 == 56 && out2 == 58))
			{
				putchar(',');
				putchar(' ');
			}
		}
		out1++;
	}
	putchar('\n');
	return (0);
}
