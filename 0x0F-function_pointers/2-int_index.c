#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for integer
 *
 * @array: input array
 * @size: array size
 * @cmp: ptr to compare fn
 *
 * Return: where cmp does not return 0 - index of first matched elem,
 * -1 for no match and where size is negative
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!(array && cmp))
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)) != 0)
			return (i);
	}
	return (-1);
}
