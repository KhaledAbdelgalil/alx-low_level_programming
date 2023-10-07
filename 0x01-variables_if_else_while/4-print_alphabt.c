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
	char out = 97;

	while (out != 97 + 26)
	{
		putchar(out++);
	}

	putchar('\n');

	return (0);
}
