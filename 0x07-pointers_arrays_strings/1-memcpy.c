#include "main.h"

/**
 * _memcpy - copies n bytes from src to dest
 * @dest: memory area of destination
 * @src: memory area of source
 * @n: bytes to copy
 *
 * Return: destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dstPtr = dest;
	char *srcPtr = src;

	while (n--)
	{
		*dstPtr++ = *srcPtr++;
	}

	return (dest);
}
