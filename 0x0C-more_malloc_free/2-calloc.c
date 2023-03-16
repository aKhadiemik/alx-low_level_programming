#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for array of nmemb elements of size bytes each,
 * and returns a pointer to the allocated memory.
 * The memory is set to zero.
 *
 * @nmemb: Number of elements to allocate memory for.
 * @size: Size of each element.
 * Return: Pointer to the allocated memory, or NULL if nmemb or size is 0 or if
 * malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;

	return (p);
}

