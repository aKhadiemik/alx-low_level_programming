#include "main.h"

/**
 * wildcmp - compares 2 strings
 * @s1: string to compare
 * @s2: string to compare
 *
 * Return: 1 if strings identical, else 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
	{
		return (*s1 == '\0');
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	}
	return ((*s1 == *s2) && wildcmp(s1 + 1, s2 + 1));
}
