#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the minimum number of coins to
 * make change for an amount of money.
 *
 * @argc: number of command line arguments.
 * @argv: array of the program command line arguments.
 * Return: 0 - success, 1 - failure
 */
int main(int argc, char *argv[])
{
	int coins = 0;
	int changes = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	coins = atoi(argv[1]);
	if (coins >= 25)
	{
		changes = coins / 25;
		coins = coins % 25;
	}
	if (coins >= 10)
	{
		changes += coins / 10;
		coins = coins % 10;
	}
	if (coins >= 5)
	{
		changes += coins / 5;
		coins = coins % 5;
	}
	if (coins >= 2)
	{
		changes += coins / 2;
		coins = coins % 2;
	}
	changes += coins;
	printf("%d\n", changes);
	return (0);
}
