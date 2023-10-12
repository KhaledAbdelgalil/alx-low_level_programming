#include <stdio.h>
#include <math.h>
/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long n = 612852475143;
	long max, i = 2, root = sqrt(n);

	while (i <= root)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
		i++;
	}
	if (n > max)
		max = n;
	printf("%lu", max);
	return (0);
}
