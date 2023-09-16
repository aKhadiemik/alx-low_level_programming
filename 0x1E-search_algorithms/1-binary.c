#include "search_algos.h"

/**
 * binary_search - searches value in sorted array using
 * Binary search algorithm
 *
 * @array: pointer to first element of array
 * @size: number of elements in array
 * @value: value to search
 *
 * Return: first index where value is located, -1 if value absent
 * from array or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, j = size - 1, m;

	if (array)
	{
		while (i <= j)
		{
			printf("Searching in array: ");
			for (m = i; m < j; m++)
				printf("%d, ", array[m]);
			printf("%d\n", array[m]);
			m = (i + j) / 2;
			if (array[m] < value)
				i = m + 1;
			else if (array[m] > value)
				j = m - 1;
			else
				return (m);
		}
	}
	return (-1);
}
