#include "main.h"

/**
 * _strcmp - Accepts 2 strings for comparison
 * @s1: string for comparison against s2
 * @s2: string for comparison against s1
 * Return: -ve int if s1 < s2, 0 if matching, +ve int if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
