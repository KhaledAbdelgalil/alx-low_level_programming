#include "main.h"
#include <string.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, ret
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *out;
	unsigned int l1, l2, l3, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	l1 = strlen(s1), l2 = strlen(s2);
	if (n > l2)
		n = l2;
	l3 = l1 + n;
	out = (char *) malloc(l3 + 1);
	if (out == NULL)
		return (NULL);
	i = 0;
	while (i < l3)
	{
		if (i < l1)
			out[i] = s1[i];
		else
			out[i] = s2[i - l1];
		i++;
	}
	out[i] = '\0';
	return (out);
}
