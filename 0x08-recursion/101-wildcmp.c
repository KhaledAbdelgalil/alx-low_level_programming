#include "main.h"
/**
 * wildcmp - compares two strings.
 * @s1: first string.
 * @s2: second string. It can contains a * as a special character.
 * Return: 1 if same, 0 if not.
 */
int wildcmp(char *s1, char *s2)
{

/*first case: we reached end of both strings ==> 1*/
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

/*second case: we reached end of s1, and s2 has char at end not * ==> 0*/
	if (*s1 == '\0' && *s2 == '*' && *(s2 + 1) != '\0')
		return (0);
/*third case: 2 strings at current idx have same char, advance both*/
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

/*
*fourth case: char at current idx of s2 is * , can take anychar
*so take what in s1 and advance s1 or
*may not take anychar so advance s2
*/
	if (*s2 == '*')
		return (wildcmp(s1 + 2, s2) || wildcmp(s1, s2 + 1));
	return (0);
}
