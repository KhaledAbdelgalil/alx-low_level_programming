#include "main.h"
#include <ctype.h>
/**
 *  leet - encodes a string into 1337.
 *
 *  @in: pointer to first char in string
 *  Return: pointer to new string
 */
char *leet(char *in)
{
	char shouldtransformation[] = "aeotlAEOTL";
	char to[] = "43071"
	int cnt = 0;
	int i = 0;
	
	while (in[cnt] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (in[cnt] == shouldtransformation[i] || in[cnt] == shouldtransformation[i + 5])
			{
				in[cnt] = to[i];
				break;
			}
		}

		cnt++;
	}
	return (in);
}
