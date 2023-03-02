#include "main.h"

/**
 * rot13 - encodes string using ROT13
 * @s: plaintext
 * Return: encoded string
 */
char *rot13(char *s)
{
	char *str = s;
	char base;
	int offset;

	while (*str != '\0')
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
		{
			offset = (*str >= 'a') && (*str <= 'z');
			base = 'a' * offset + 'A' * (1 - offset);
			*str = ((*str - base + 13) % 26) + base;
		}
		str++;
	}

	return (s);
}
