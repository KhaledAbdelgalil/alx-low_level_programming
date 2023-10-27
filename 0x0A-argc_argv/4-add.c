#include <stdlib.h>
#include <stdio.h>
/**
 * main - print sum of arguments given.
 * @argc: number of command line arguments.
 * @argv: array of the program command line arguments.
 * Return: 0 - success, 1 - failure
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1, j = 0;

	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] > '9' || argv[i][j] < 0)
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum = sum + atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
