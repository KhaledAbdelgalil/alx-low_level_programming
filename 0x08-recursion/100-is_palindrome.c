#include "main.h"
/**
 * palindrome_helper - compares left char with right char
 * to help identifying palindromes.
 * @s:  input string
 * @left: left iterator.
 * @right: right iterator.
 * Return: 1 if palindrome, 0 if not.
 */
int palindrome_helper(char *s, int left, int right)
{
	if (right <= left)
		return (1);
	if (s[left] == s[right])
		return (palindrome_helper(s, left + 1, right - 1));
	return (0);
}
/**
 * is_palindrome - detects if a string is a palindrome.
 * @s: input string.
 * Return: 1 if palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	if (s[0] == '\0')
		return (1);
	return (palindrome_helper(s, 0, strlen(s) - 1));
}
