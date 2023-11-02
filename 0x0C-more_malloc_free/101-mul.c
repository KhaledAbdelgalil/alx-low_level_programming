#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be checked
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	unsigned int i = 0;

	while (*(s + i))
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *str1 = argv[1], *str2 = argv[2], firstNonZeroComes = 0;
	int len1, len2, len, i, j, *result, carry, digit1, digit2;

	if (argc != 3 || !is_digit(str1) || !is_digit(str2))
		printf("Error\n"), exit(98);
	len1 = strlen(str1), len2 = strlen(str2);
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
		carry = 0;
		while (j >= 0)
		{
			digit2 = str2[j] - '0';
			carry += result[i + j + 1] + (digit1 * digit2);
			result[i + j + 1] = carry % 10;
			carry /= 10;
			j--;
		}
		result[i + j + 1] += carry;
		i--;
	}
	for (i = 0; i < len - 1; i++)
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
