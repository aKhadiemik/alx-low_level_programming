#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to newly allocated mem space
 * containing copy of input string
 *
 * @str: input string
 * Return: NULL if str = NULL, if success - pointer to
 * duplicated string, NULL if mem insufficient
 */

char *_strdup(char *str)
{
	int i, len;
	char *new_str;

	if (str == ((void *) 0))
	{
		return ((void *) 0);
	}

	len = 0;
	while (*(str + len) != '\0')
	{
		len++;
	}

	new_str = (char *) malloc((len + 1) * sizeof(char));

	if (new_str == ((void *) 0))
	{
		return ((void *) 0);
	}

	for (i = 0; i <= len; i++)
	{
		*(new_str + i) = *(str + i);
	}

	return (new_str);
}
