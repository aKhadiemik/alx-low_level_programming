#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - computes sum of all integers divisible by 3 or 5
 * Range of input integers 0 =< n < 1024
 * Return: Success
 */

int main(void)
{
	int i = 1;
	int total = 0;

	while (i < 1024)
	{
		if (i % 3 == 0)
			total += i;
		else if (i % 5 == 0)
			total += i;

		i++;
	}
	printf("%d\n", total);

	return (0);
}
