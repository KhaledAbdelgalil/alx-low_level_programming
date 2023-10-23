#include "main.h"
/**
 * print_chessboard - print chessboard
 *
 * @board: 2d chessboard 8*8
 *
 * Return: void , just print it
 */
void print_chessboard(char (*board)[8])
{
	unsigned char i = 0, j = 0;

	while (i != 8)
	{
		j = 0;
		while (j != 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
