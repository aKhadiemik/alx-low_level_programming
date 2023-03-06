#include "main.h"

/**
 *_memset - fills first n bytes with the constant byte b
 *	for memory area pointed to by s
 * @s: buffer array
 * @b: constant byte
 * @n: number of bytes of memory area to fill
 *
 * Return: Pointer to memory area `s`
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
