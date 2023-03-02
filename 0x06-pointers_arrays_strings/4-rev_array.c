#include "main.h"

/**
 * reverse_array - reverse the contents of an array of integers
 * @a: pointer to array of integers
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int *start, *end, tmp;


	if (a == (void *) 0 || n <= 0)
	{
		return;
	}

	start = a;
	end = a + n - 1;

	while (start < end)
	{
		tmp = *start;
		*start = *end;
		*end = tmp;

		start++;
		end--;
	}
}

