#include "main.h"


/**
 * square_root - returns sq rt of the input
 * @n: integer
 *
 * Return: root of n
 */

int square_root(int n)
{
	int x, y;

	x = n;
	y = 1;
	while (x > y)
	{
		x = (x + y) / 2;
		y = n / x;
	}
	return (x);
}

/**
 * is_prime_number - returns 1 of the input
 * integer is a prime number, otherwise return
 * @n: integer
 *
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	int i;

	if (n == 1)
	{
		return (0);
	}

	for (i = 2; i <= square_root(n); i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
