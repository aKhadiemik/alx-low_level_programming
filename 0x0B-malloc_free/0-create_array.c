#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars, initializes with specific char
 *
 * @size: size of array
 * @c: input character
 * Return: NULL if size = 0, pointer to array if success, NULL if fails
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return ((void *) 0);
	}

	char *arr; 
	arr = (char *) malloc(size * sizeof(char));

	if (arr == ((void *) 0))
	{
		return ((void *) 0);
	}

	for (unsigned int i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
