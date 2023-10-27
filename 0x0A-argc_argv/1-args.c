#include <stdio.h>
/**
 * main - prints number of command line arguments,
 * followed by a new line.
 * 
 * @argc: number of command line arguments.
 * @argv: array of the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc);
	return (0);
}
