#include <stdio.h>
/**
 * main - command line arguments.
 * @argc: number of command line arguments.
 * @argv: array of the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
