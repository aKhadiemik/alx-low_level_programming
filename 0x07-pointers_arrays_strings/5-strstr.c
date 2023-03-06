#include "main.h"

/**
 * _strstr - locates a substring of hastack
 * @haystack: string
 * @needle: sbstring to find
 *
 * Return: if found, pointer to beginning of substring
 * if not found NULL
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return ((void *) 0);
}
