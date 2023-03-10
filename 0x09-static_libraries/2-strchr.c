#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to find in s
 *
 * Return: pointer to the first occurrence of
 * the character c in the string s, or NULL if
 * the character is not found
 */

char *_strchr(char *s, char c)
{
	if (s == (void *) 0)
		return ((void *) 0);

	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *) s);
		}
		s++;
	}
	if (*s == c)
		return ((char *)s);
	else
		return ((void *) 0);
}
