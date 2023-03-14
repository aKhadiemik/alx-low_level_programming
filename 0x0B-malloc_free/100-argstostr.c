#include "main.h"
#include <stdlib.h>

/**
 * total_length - returns the total length of a 2D array of strings
 *
 * @arr: 2D array of strings
 * @rows: number of rows
 * @cols: number of columns
 * Return: length of array
 */

static int total_length(char **arr, int rows, int cols)
{
	int i, j, length;

	length = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			length++;
			if (arr[i][j] == '\0')
			{
				break;
			}
		}
		length++;
	}
	return (length);
}

/**
 * copy_strings - copies a 2D array of strings into
 * a new contiguous block of memory
 *
 * @arr: 2D array of strings
 * @rows: rows of array
 * @cols: columns of array
 * @length: length of new string
 * Return: array or list of strings with each string followed by new line
 */

static char *copy_strings(char **arr, int rows, int cols, int length)
{
	int i, j, index;
	char *new_str;

	new_str = (char *) malloc(length * sizeof(char));
	if (new_str == NULL)
	{
		return (NULL);
	}
	index = 0;

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			new_str[index++] = arr[i][j];
			if (arr[i][j] == '\0')
			{
				break;
			}
		}
		new_str[index++] = '\n';
	}
	return (new_str);
}

/**
 * argstostr - concatenates all the arguments of the program
 * final string arranges each argument followed by a newline character
 *
 * @ac: number of arguments
 * @av: array of arguments
 * Return: if success- pointer to a new string, NULL if ac == 0 or av == NULL
 * NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int length;
	char *new_str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	length = total_length(av, ac, 0);
	new_str = copy_strings(av, ac, 0, length);
	return (new_str);
}
