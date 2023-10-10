#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int sum = 0;
	unsigned long int first = 1, second = 1, temp = 2;

	while (temp <= 4000000)
	{
		first = second;
		second = temp;
		sum += (temp % 2 == 0) ? temp : 0;
		temp = first + second;
	}

	printf("%lu\n", sum);
	return (0);
}
