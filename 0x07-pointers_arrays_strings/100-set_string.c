#include "main.h"

/**
 * set_string - sets value of a pointer to value of string
 * @s: pointer to string
 * @to: string
 */

void set_string(char **s, char *to)
{
	if (s == ((void *) 0))
	{
		return;
	}
	*s = to;
}
