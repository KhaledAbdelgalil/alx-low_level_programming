#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned int n = 1023, sum = 0;

	while (n >= 3)
	{
		sum += (n % 3 == 0 || n % 5 == 0) ? n : 0;
		n--;
	}

	printf("%u\n", sum);
	return (0);
}
