#include "main.h"

/**
 * string_length - calculates length of string
 * @s: string
 *
 * Return: length of string
 */

int string_length(char *s)
{
	if (!(*s))
	{
		return (0);
	}
	return (1 + string_length(s + 1));
}

/**
 * is_palindrome_helper - checks is substring is palindrome
 * @s: string
 * @start: start of string
 * @end: end of string
 *
 * Return: 0 if not palindrome, 1 if palindrome
 */

int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] == s[end])
	{
		return (is_palindrome_helper(s, start + 1, end - 1));
	}
	return (0);
}

/**
 * is_palindrome - calculates length of string and checks if palindrome
 * @s: strign
 *
 *Return: 0 if not palindrome, 1 if palindrome
 */

int is_palindrome(char *s)
{
	int len;

	len = string_length(s);

	return (is_palindrome_helper(s, 0, len - 1));
}
