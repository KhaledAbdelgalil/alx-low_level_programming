#include "main.h"
/**
 *  _isupper - Checks for upper char.
 *
 *  @input: the char in ascii code
 *  Return: 1 if uppercase, 0 if lowercase
 */
int _isupper(char input)
{
	return (input >= 65 && input <= 25 + 65);
}
