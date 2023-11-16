#include <stdio.h>

/**
 * bmain - Function executed before main.
 * Return: No return value.
 */
void __attribute__ ((constructor)) bmain()
{
	printf("You're beat! And yet, you must allow,
			\nI bore my house upon my back!\n");
}

