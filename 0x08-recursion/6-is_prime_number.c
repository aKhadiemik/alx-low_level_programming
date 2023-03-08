#include "main.h"

/**
 * is_prime_number - returns 1 if the input
 * integer is a prime number, otherwise return
 * @n: integer
 *
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n == 1)
	{
		return (0);
	}
	int i;

	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
