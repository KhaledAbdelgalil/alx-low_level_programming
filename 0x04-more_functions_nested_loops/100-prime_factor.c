#include <stdio.h>
#include <math.h>
/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long n = 612852475143;
	unsigned long max = 3, i = 3, root = sqrt(n);

	while (n % 3 == 0)
		n = n / 3;
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
