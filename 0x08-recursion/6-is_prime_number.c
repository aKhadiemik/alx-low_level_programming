#include "main.h"


/**
 * is_prime_helper - checks if n is divisible by integers
 * in range 2 to sq rt of n
 * @n: integer
 * @i: integer
 *
 * Return: root of n
 */

int is_prime_helper(int n, int i)
{
	if (n <= 2)
	{
		return (n == 2);
	}
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, i + 1));
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
	is_prime_helper(n, 2);
}
