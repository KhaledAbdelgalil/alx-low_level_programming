#include "main.h"
/**
 *  string_toupper -  capatilize lower letters
 *
 *  @in: pointer to first char in string
 *  Return: pointer to new string
 */
char *string_toupper(char *in)
{
	int cnt = 0;

	while (in[cnt] != '\0')
	{
		if (in[cnt] >= 'a' && in[cnt] <= 'z')
			in[cnt] = in[cnt] - 'a' + 'A';
		cnt++;
	}
	return (in);
}
