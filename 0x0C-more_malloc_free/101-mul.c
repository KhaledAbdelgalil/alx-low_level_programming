#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *str1, *str2, firstNonZeroComes = 0;
	int len1, len2, len, i, j;
	int *result, carry, digit1, digit2;

	if (argc != 3)
		printf("Error\n"), exit(98);
	str1 = argv[1], str2 = argv[2];
	len1 = strlen(str1);
	len2 = strlen(str2);
	len = len1 + len2 + 1;
	result = (int *) malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i <= len - 1; i++)
		result[i] = 0;
	i = len1 - 1;
	while (i >= 0)
	{
		digit1 = str1[i] - '0';
		j = len2 - 1;
		while (j >= 0)
		{
			digit2 = str2[j] - '0';
			carry += result[i + j + 1] + (digit1 * digit2);
			result[i + j-- + 1] = carry % 10;
			carry /= 10;
		}
		i--;
	}
	i = 0;
	while (i < len - 1)
	{
		if (result[i])
			firstNonZeroComes = 1;
		if (firstNonZeroComes)
			putchar(result[i] + '0');
	}
	if (firstNonZeroComes == 0)
		putchar('0');
	putchar('\n'), free(result);
	return (0);
}
