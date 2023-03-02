#include "main.h"

/**
 * rot13 - encodes string using ROT13
 * @s: plaintext string
 *
 * Return: encoded string
 */

char *rot13(char *s)
{
	char *p = s;
	char c;
	int index;

	while (*p != '\0')
	{
		c = *p;

		if (c >= 'a' && c <= 'z')
		{
			index = c - 'a';
			*p = (index + 13) % 26 + 'a';
		}
		else if (c >= 'A' && c <= 'Z')
		{
			index = c - 'A';
			*p = (index + 13) % 26 + 'A';
		}

		p++;
	}

	return (s);
}

