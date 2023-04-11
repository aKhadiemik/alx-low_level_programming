#include "main.h"

/**
 * get_endianness - checks endianness
 *
 * Return: if big endian 0, 1 otherwise
 */
int get_endianness(void)
{
	int i = 1;
	char *endianess;

	endianess = (char *)&i;
	return (*endianess);
}
