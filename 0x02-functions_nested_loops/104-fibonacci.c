#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned char n = 1;
	unsigned long int first = 1, second = 1;
	unsigned long int temp = 0, first2 = 0, second2 = 0, temp2 = 0;

	printf("%u", 1u);
	while (n < 91)
	{
		temp = first + second;
		first = second;
		second = temp;
		printf(", %lu", temp);
		n++;
	}
	/*the idea is splitting on 2 parts*/
	first2 = first % 100000000;
	first = first / 100000000;
	second2 = second % 100000000;
	second = second / 100000000;
	while (n < 98)
	{
		temp = first + second;
		temp2 = first2 + second2;
		first2 = second2, second2 = temp2;
		first = second, second = temp;
		printf(", %lu", temp + temp2 / 100000000);
		printf("%lu", temp2 % 100000000);
		n++;
	}


	printf("\n");
	return (0);
}
