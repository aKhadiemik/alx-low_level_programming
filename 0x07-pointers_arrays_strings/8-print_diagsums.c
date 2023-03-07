#include "main.h"

/**
 * print_diagsums - prints sum of 2 diags of square matrix
 * @a: matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	if (matrix == ((void *) 0))
	{
		return;
	}

	int i, j, diagonal1_sum = 0, diagonal2_sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				diagonal1_sum += *(matrix + (i * size) + j);
			}
			if (i + j == size - 1)
			{
				diagonal2_sum += *(matrix + (i * size) + j);
			}
		}
	}
	printf("Diagonal 1 sum: %d\n", diagonal1_sum);
	printf("Diagonal 2 sum: %d\n", diagonal2_sum);
}
