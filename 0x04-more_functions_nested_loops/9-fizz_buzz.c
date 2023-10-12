#include <stdio.h>
/**
 * main - fizzbuzz program.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned char out = 1;

	while (out != 101)
	{
		if (out % 15 == 0)
			printf("FizzBuzz");
		else if (out % 5 == 0)
			printf("Buzz");
		else if (out % 3 == 0)
			printf("Fizz");
		else
			printf("%d", out);
		printf(" ");
		out++;
	}
	printf("\n");
	return (0);
}
