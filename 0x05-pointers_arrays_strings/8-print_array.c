#include "main.h"
#include <stdio.h>

/**
 * print_array - print `n` elements of an array of integers
 * @a: int array
 * @n: elements to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < 0; i++)
	{
		printf("%d", a[i]);
		if (i < (n -1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
