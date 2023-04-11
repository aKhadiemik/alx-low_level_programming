#include"main.h"

/**
 * get_bit - gets bit at given index.
 * @n: integer
 * @index: index
 *
 * Return: selected bit, -1 otherwise
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n & mask) ? 1 : 0);
}
