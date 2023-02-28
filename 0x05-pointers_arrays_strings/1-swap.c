#include "main.h"

/**
 * swap_int - swaps value of a and b
 * @a: pointer to int
 * @b: pointer to int
 */

void swap_int(int *a, int *b)
{
	int swapvar;

	swapvar = *a;
	*a = *b;
	*b = swapvar;
}
