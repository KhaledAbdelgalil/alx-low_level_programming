#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned char n = 1;
       	unsigned long int first = 1, second = 1, temp = 0;
	
	printf("%u", 1u);
	while (n < 50)
	{
		temp = first + second;
		first = second;
		second = temp;
		printf(", %lu", temp);
		n++;
	}

	printf("\n");
	return (0);
}
