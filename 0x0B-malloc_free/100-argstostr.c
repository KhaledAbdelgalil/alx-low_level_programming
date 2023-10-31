#include "main.h"
/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: arguments.
 *
 * Return: pointer of an array of char
 */
char *argstostr(int ac, char **av)
{
	char *out;
	int count, i, j, idx;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		count += strlen(av[i]);
	}
	count = count + ac;

	/*reserve size for string*/
	out = malloc(sizeof(char) * (count + 1));

	if (out == NULL)
	{
		return (NULL);
	}

	ptr = 0;
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
			out[ptr++] = av[i][j++];
		out[ptr++] = '\n';
		i++;
	}
	out[ptr] = '\0';

	return (out);
}
