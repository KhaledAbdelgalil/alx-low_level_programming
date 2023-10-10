#include "main.h"

/**
 * print_times_table - prints the nth times table.
 * @n: nth number
 */
void print_times_table(int n)
{
	if (n > 15 || n < 0)
		return;
	char i, j;
	char ans = 0;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			ans = j * i;
			if (j == 0)
			{
				_putchar(ans + '0');
			}
			else if (ans < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(ans + '0');
			}
			else if (ans < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ans / 10 + '0');
				_putchar(ans % 10 + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(ans / 10 + '0');
				_putchar(ans % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
