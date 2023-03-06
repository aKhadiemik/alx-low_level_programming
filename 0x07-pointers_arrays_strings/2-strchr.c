#include "main.h"

/**
 * _strchr - locates character in a string
 * @s: string
 * @c: character to find in s
 *
 * Return: pointer to the first occurrence of
 * the character c in the string s, or NULL if
 * the character is not found
 */

char *_strchr(char *s, char c)
{
	int i;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return ((void *)0);
}
