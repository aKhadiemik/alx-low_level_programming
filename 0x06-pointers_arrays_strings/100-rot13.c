#include "main.h"

/**
 * rot13 - encodes string using ROT13
 * @s: plaintext string
 *
 * Return: encoded string
 */

char *rot13(char *s)
{
	char *str = s;
	char c, base;
	int offset;

	while (*str != '\0')
	{
		c = *str;

		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			if (c >= 'a')
			{
				base = 'a';
			}
			else
			{
				base = 'A';
			}

			offset = c - base;
			if (offset < 13)
			{
				*str = base + offset + 13;
			}
			else
			{
				*str = base + offset - 13;
			}
		}

		str++;
	}
	return (s);
}
