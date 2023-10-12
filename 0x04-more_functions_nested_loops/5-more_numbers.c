#include "main.h"
/**
 *  more_numbers - prints from 0 to 14, followed by a new line, do 10 times.
 */
void  more_numbers(void)
{
	unsigned char out = 0;
	unsigned char cnt = 0;

	while (cnt != 10)
	{
		out = 0;
		while (out != 15)
		{
			if (out >= 10)
				_putchar(out / 10 + 48);
			_putchar(out % 10 + 48);
			out++;
		}

		_putchar('\n');
		cnt++;
	}
}
