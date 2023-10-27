#include "main.h"
/**
 *  _isalpha - Checks for alphabetic  char.
 *
 *  @input: the char in ascii code
 *  Return: 0 if not alpha, 1 if alpha
 */
int _isalpha(int input)
{
	return ((input >= 'A' && input <= 'Z') || (input >= 97 && input <= 25 + 97));
}
