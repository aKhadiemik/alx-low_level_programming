#include "hash_tables.h"

/**
 * hash_djb2 - hash function implements djb2 algorithm
 *
 * @str: input string
 *
 * Return: hash value calculated by the algorithm
 */

unsigned long hash_djb2(const unsigned char *str)
{
	unsigned long hash = 5381;

	if (str == NULL)
		return (0);

	while (*str)
	{
		hash = ((hash << 5) + hash) + *str;
		str++;
	}

	return (hash);
}
