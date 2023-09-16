#include "search_algos.h"
#include <math.h>

/* flag for compiling math.h with gcc `-lm` */

size_t min(size_t a, size_t b);

/**
 * min - returns the min of two size_t values
 * @a: first value
 * @b: second value
 *
 * Return: lower value once `a` and `b` are compared
 */
size_t min(size_t a, size_t b)
{
	return (a <= b ? a : b);
}

/**
 * jump_search - search for value in sorted integer array
 * using jump search algorithm
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search
 *
 * Return: first index containing `value`, -1 if `value` not found or
 * `array` is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t low, high, jump;

	if (!array || size == 0)
		return (-1);

	jump = sqrt(size);

	for (high = 0; high < size && array[high] < value;
	     low = high, high += jump)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       high, array[high]);
	}

	/* causes 'found' msg even when value not in array */
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	for (; low <= min(high, size - 1); low++)
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		if (array[low] == value)
			return (low);
	}

	return (-1);
}
