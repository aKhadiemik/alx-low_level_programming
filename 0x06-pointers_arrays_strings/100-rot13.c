#include "main.h"

/**
 * rot13 - encodes string using ROT13
 * @s: plaintext
 * Return: encoded string
 */
char *rot13(char *s)
{
	char *str = s;
	char c;
	int offset;

	while (*str)
	{
		c = *str;

		offset = (c >= 'a') ? c - 'a' : (c >= 'A' && c <= 'Z') ? c - 'A' : -1;
		if (offset >= 0)
		{
			*str = ((offset + 13) % 26) + ((c >= 'a') ? 'a' : 'A');
		}

		str++;
	}

	return (s);
}
