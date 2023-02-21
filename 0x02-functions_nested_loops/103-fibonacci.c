#include <stdio.h>

/**
 * main - prints sum of the even members in fibonacci series
 * Limitation - greatest member not to exceed 4_000_000
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	unsigned long int m, x, p, sum;

	m = 1;
	x = 2;
	sum = 0;

	for (n = 1; n <= 33; ++n)
	{
		if (m < 4000000 && (m % 2) == 0)
		{
			sum = sum + m;
		}
		p = m + x;
		m = x;
		x = p;
	}

	printf("%lu\n", sum);

	return (0);
}
