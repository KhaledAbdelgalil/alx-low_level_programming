#include "main.h"
/**
 *  _islower - Checks for lowercase char.
 *
 *  @input: the char in ascii code
 *  Return: 0 if uppercase, 1 if lowercase
 */
int _islower(char input)
{
	return (input >= 97 && input <= 25 + 97);
}
