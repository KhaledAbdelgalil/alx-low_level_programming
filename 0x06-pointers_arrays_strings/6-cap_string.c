#include "main.h"
/**
 *  cap_string -  capatilize words
 *
 *  @in: pointer to first char in string
 *  Return: pointer to new string
 */
char *cap_string(char *in)
{
	int cnt = 0;
	bool newWord = true;

	while (in[cnt] != '\0')
	{
		if (newWord && in[cnt] >= 'a' && in[cnt] <= 'z')
			in[cnt] = in[cnt] - 'a' + 'A';
		else if (in[cnt] == ' ' || in[cnt] == '\n')
			newWord = true;
		else
			newWord = false;
		cnt++;
	}
	return (in);
}
