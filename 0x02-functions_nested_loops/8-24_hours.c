#include "main.h"

/**
 *  jack_bauer - print from 00:00 to 23:59.
 *  Return: Void
 */
void jack_bauer(void)
{
	int mins = 0;
	int hrs = 0;

	while (hrs != 23 || mins != 60)
	{
		if (mins == 60)
		{
			mins = 0;
			hrs = hrs + 1;
		}
		_putchar(hrs / 10 + '0');
		_putchar(hrs % 10 + '0');
		_putchar(':');
		_putchar(mins / 10 + '0');
		_putchar(mins % 10 + '0');
		mins++;
		_putchar('\n');
	}
}
