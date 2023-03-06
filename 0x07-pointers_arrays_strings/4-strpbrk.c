#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 *@s: string
 *@accept: array of bytes to search for in s
 *
 * Return: pointer to the byte in s that matches one of
 * the bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return ((void *) 0);
}
