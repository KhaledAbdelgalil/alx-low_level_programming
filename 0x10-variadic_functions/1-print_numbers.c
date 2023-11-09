#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 * @separator: seperator between numbers.
 * @n: number of integers passed to the function.
 * Return: no return, just print.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
