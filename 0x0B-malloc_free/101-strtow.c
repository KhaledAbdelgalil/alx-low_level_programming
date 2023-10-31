#include "main.h"
/**
 * count_word - helper function to count the number of words in a string
 * @str: input string
 *
 * Return: number of words
 */
int count_word(char *str)
{
	unsigned int space, idx, words_count;

	space = 0;
	words_count = 0;

	for (idx = 0; str[idx] != '\0'; idx++)
	{
		if (str[idx] == ' ')
		{
			space = 0;
		}
		else if (space == 0)
		{
			space = 1;
			words_count++;
		}
	}

	return (words_count);
}
/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings
 * or NULL
 */
char **strtow(char *str)
{
	char **out, *tmpStr;
	int len = strlen(str), words_count = count_word(str);
	int i = 0, idx_out = 0, startIdx = 0, endIdx = 0, lenCurrWord = 0, f = 0;

	if (words_count == 0)
		return (NULL);
	out = (char **) malloc(sizeof(char *) * (words_count + 1));
	if (out == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (lenCurrWord)
			{
				endIdx = i;
				tmpStr = (char *) malloc(sizeof(char) * (lenCurrWord + 1));
				if (tmpStr == NULL)
				{
					free(tmpStr);
					for (f = 0; f < idx_out; f++)
					{
						free(out[f]);
					}
					free(out);
					return (NULL);
				}
				while (startIdx < endIdx)
					*tmpStr++ = str[startIdx++];
				*tmpStr = '\0';
				out[idx_out] = tmpStr - lenCurrWord;
				idx_out++;
				lenCurrWord = 0;
			}
		}
		else if (lenCurrWord++ == 0)
			startIdx = i;
	}
	out[idx_out] = NULL;
	return (out);
}
