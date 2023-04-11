#include "main.h"

/**
 * set_bit - sets bit to 1 at given index.
 * @n: integer
 * @index: index
 *
 * Return: if success 1 if it worked, -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= mask;
	return (1);
}
