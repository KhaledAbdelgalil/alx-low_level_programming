#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Generates and prints passwords for the crackme5 executable.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char password[7], *code;
	int user_len = strlen(argv[1]), idx, tmp_calculation;
	int const and = 63;

	code = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	tmp_calculation = (user_len ^ 59) & and;
	password[0] = code[tmp_calculation];
	tmp_calculation = 0;
	for (idx = 0; idx < user_len; idx++)
		tmp_calculation += argv[1][idx];
	tmp_calculation = (tmp_calculation ^ 79) & and;
	password[1] = code[tmp_calculation];
	tmp_calculation = 1;
	for (idx = 0; idx < user_len; idx++)
		tmp_calculation *= argv[1][idx];
	tmp_calculation = (tmp_calculation ^ 85) & and;
	password[2] = code[tmp_calculation];
	tmp_calculation = argv[1][0];
	for (idx = 1; idx < user_len; idx++)
	{
		if (argv[1][idx] > tmp_calculation)
			tmp_calculation = argv[1][idx];
	}
	srand(tmp_calculation ^ 14);
	password[3] = code[rand() & and];
	tmp_calculation = 0;
	for (idx = 0; idx < user_len; idx++)
		tmp_calculation += (argv[1][idx] * argv[1][idx]);
	tmp_calculation = (tmp_calculation ^ 239) & and;
	password[4] = code[tmp_calculation];
	for (idx = 0; idx < argv[1][0]; idx++)
		tmp_calculation = rand();
	tmp_calculation = (tmp_calculation ^ 229) & and;
	password[5] = code[tmp_calculation];
	password[6] = '\0';
	printf("%s", password);
	return (0);
}
