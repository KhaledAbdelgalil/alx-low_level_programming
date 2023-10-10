#include "main.h"

/**
 * times_table - prints the 9 times table.
 */
void times_table(void)
{
	char i, j;
	char ans = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
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
				_putchar(ans + '0');
			} 
			else if (ans >= 10)
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
