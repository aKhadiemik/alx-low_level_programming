#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * final string arranges each argument followed by a newline character
 *
 * @ac: number of arguments
 * @av: array of arguments
 * Return: pointer to a new string, NULL if ac == 0 or av == NULL
 * NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i,j, len, total_len;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	total_len = 0;
	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len] != '\0')
		{
			len++;
		}
		total_len += len + 1;
	}

	str = malloc(sizeof(char) * total_len);

	return (str == NULL) ? NULL: str;

	len = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			str[len] = av[i][j];
			len++;
			j++;
		}
		str[len] = '\n';
		len++;
	}
	str[len] = '\0';

	return (str);
}
