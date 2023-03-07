#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of 2 diags of square matrix
 * @a: a
 * @size: size of a
 */

void print_diagsums(int *a, int size)
{
	int i, j, diagonal1_sum, diagonal2_sum;

	diagonal1_sum = 0, diagonal2_sum = 0;

	if (a == ((void *) 0))
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				diagonal1_sum += *(a + (i * size) + j);
			}
			if (i + j == size - 1)
			{
				diagonal2_sum += *(a + (i * size) + j);
			}
		}
	}
	printf("%d, %d\n", diagonal1_sum, diagonal2_sum);
}
