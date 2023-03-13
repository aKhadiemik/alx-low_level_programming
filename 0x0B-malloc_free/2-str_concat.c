#include "main.h"
#include <stdlib.h>

/**
 * get_string_length - calculates length of string
 *
 * @s: string
 * Return: length of string
 */

int get_string_length(char *s)
{
	int len;

	len = 0;
	while (*(s + len) != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * str_concat - concatenates 2 strings
 *
 * @s1: string
 * @s2: string
 * Return: NULL on failure, on success - pointer should point to
 * a newly allocated space in memory which contains the contents of s1
 * followed by the contents of s2
 */

char *str_concat(char *s1, char *s2)
{
	int i, len1, len2;
	char *new_str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = get_string_length(s1);
	len2 = get_string_length(s2);

	new_str = (char *) malloc((len1 + len2 + 1) * sizeof(char));

	if (new_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		*(new_str + i) = *(s1 + i);
	}

	for (i = 0; i <= len2; i++)
	{
		*(new_str + len1 + i) = *(s2 + i);
	}

	return (new_str);
}
