#include "main.h"
/**
 *   swap_int - swap values in input numbers.
 *
 *  @in1: pointer to first input
 *  @in2: pointer to second input
 *  Return: void
 */
void swap_int(int *in1, int *in2)
{
	int tmp = *in1;

	*in1 = *in2;
	*in2 = tmp;
}
