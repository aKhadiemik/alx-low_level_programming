#include "main.h"

/**
 * is_prime_number - returns 1 if the input
 * integer is a prime number, otherwise return
 * @n: integer
 *
 * Return: 1 if prime, 0 if not
 */

int square_root(n)
{
	int x, y;

	x = n;
	y = 1;
	while (x > y)
	{
		x = () / 2;
		y = n / x;
	}
	return (x);
}

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
