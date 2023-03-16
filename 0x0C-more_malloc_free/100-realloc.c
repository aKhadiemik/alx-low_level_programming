#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Reallocates memory block using malloc and free
 *
 * @ptr: Pointer to memory previously allocated with call to malloc
 * @old_size: Size of the allocated space for ptr
 * @new_size: New size of the new memory block
 *
 * Return: Pointer to the reallocated memory block, NULL on failure
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			((char *) new_ptr)[i] = ((char *) ptr)[i];
		}
	}
	else
	{
		for (i = 0; i < new_size; i++)
		{
			((char *) new_ptr)[i] = ((char *) ptr)[i];
		}
	}

	free(ptr);

	return (new_ptr);
}
