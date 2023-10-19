#include "main.h"
#include <ctype.h>
/**
 *  cap_string -  capatilize words
 *
 *  @in: pointer to first char in string
 *  Return: pointer to new string
 */
char *cap_string(char *in)
{
	int cnt = 0;
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	if (islower(in[0]))
		in[0] = toupper(in[0]);
	cnt++;
	while (in[cnt] != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (in[cnt] == separators[i])
			{
				if (islower(in[cnt + 1]))
				{
					in[cnt + 1] = toupper(in[cnt + 1]);
				}
				break;
			}
		}
		cnt++;
	}
	return (in);
}
