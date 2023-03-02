#include "main.h"

/**
 * reverse_array - reverse the contents of an array of integers
 * @a: pointer to array of integers
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int *start = a;
	int *end = a + n - 1;
	int tmp;

	if (a == NULL || n < 0)
	{
		return;
	}

	while (start < end)
	{
		tmp = *start;
		*start = *end;
		*end = tmp;

		start++;
		end--;
	}
}

