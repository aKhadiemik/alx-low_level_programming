#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - execute fn given a parameter
 * on each array
 *
 * @array: input array
 * @size: size of array
 * @action: ptr to fn
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned in i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(*(array + i));
}
