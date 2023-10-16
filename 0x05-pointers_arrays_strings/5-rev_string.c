#include "main.h"
/**
 *  rev_string -  reverse string inplace
 *
 *  @in: pointer to first char in string
 *  Return: void
 */
void rev_string(char *in)
{
	int cnt = 0, i = 0;
	char tmp;

	while (in[cnt] != '\0')
	{
		cnt++;
	}
	while (i < cnt / 2)
	{
		tmp = in[i];
		in[i] = in[cnt - i - 1];
		in[cnt - i] = tmp;
		i++;
	}
}
