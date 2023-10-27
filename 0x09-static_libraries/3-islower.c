#include "main.h"
/**
 *  _islower - Checks for lowercase char.
 *
 *  @input: ascii code
 *  Return: 0 if uppercase, 1 if lowercase
 */
int _islower(int input)
{
	return (input >= 97 && input <= 25 + 97);
}
