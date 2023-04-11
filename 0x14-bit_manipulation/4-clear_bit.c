#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - sets bit to 0 at given index
 * @n: integer
 * @index: index
 * Return: if success 1, -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = ~(1UL << index);

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n &= mask;
	return (1);
}
