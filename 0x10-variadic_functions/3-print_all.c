#include "variadic_functions.h"
/**
 * istype - checks if char is c,i,f,s.
 * @in:	input char.
 * Return: 0 or 1
 */
unsigned char istype(char in)
{
	return (in == 'c' || in == 'i' || in == 'f' || in == 's');
}
/**
 * print_all - prints anything.
 * @format: a list of types
 * Return: no return, just print
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int i = 0;
	unsigned char notFirstTime = 0;
	char *tempStr;

	va_start(valist, format);
	while (format && format[i])
	{
		if (istype(format[i]) && notFirstTime)
		{
			printf(", ");
		}

		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(valist, int));
			notFirstTime = 1;
			break;
		case 'i':
			printf("%d", va_arg(valist, int));
			notFirstTime = 1;
			break;
		case 'f':
			printf("%f", va_arg(valist, double));
			notFirstTime = 1;
			break;
		case 's':
			tempStr = va_arg(valist, char *);
			notFirstTime = 1;
			if (tempStr == NULL)
				printf("(nil)");
			else
				printf("%s", tempStr);
			break;
		}
		i++;
	}
	printf("\n"), va_end(valist);
}

