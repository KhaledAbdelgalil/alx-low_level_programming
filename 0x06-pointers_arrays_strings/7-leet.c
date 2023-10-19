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
	char transformation[] = "4bcd3fghijk1mn0pqrs7uvwxyz";
	int cnt = 0;
	char tmp;

	while (in[cnt] != '\0')
	{
		if (isalpha(in[cnt]))
		{
			tmp = tolower(in[cnt]);
			in[cnt] = transformation[tmp - 'a'];
		}
		cnt++;
	}
	return (in);
}
