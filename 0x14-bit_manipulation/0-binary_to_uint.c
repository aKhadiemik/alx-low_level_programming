#include "main.h"

/**
 * binary_to_uint - converts binary number unsigned int
 * @b: string, represents number
 *
 * Return: unsigned int, 0 otherwise
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int k;

	for (k = 0; b && *b; b++)
	{
		/* check for invalid chars */
		if (*b != '0' && *b != '1')
			return (0);

		/* shift num left and add current bit */
		k <<= 1;
		k += *b - '0';
	}
	return (k);
}
