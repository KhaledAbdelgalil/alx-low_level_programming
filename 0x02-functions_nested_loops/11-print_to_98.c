#include "main.h"

/**
 * print_to_98 - print from n to 98
 * @n: A input integer
 * Return: Nothing
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n++ <= 98)
		{
			printf("%d", n);
			if (n != 98)
				_putchar(", ");
		}
		printf("\n");
	}
	else
	{
		while (n-- >= 98)
		{
			printf("%d", n);

			if (n == 98)
				printf(", ");
		}
		printf("\n");
	}
}
