#include "main.h"

/**
 * _strncpy - Copy string from index 0 of destination string
 * @dest: destination string
 * @src: source string
 * @n: elements to copy
 * Return: destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
