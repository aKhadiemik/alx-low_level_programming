#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: square for which to determine root
 *
 * Return: If sq rt of n not natural number return -1, else return sq rt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	int guess
	sq_root = _sqrt_recursion(n / 2) * 2;

	if (sq_root * sq_root > n)
	{
		return (_sqrt_recursion(n / 2));
	}
	else
	{
		return (sq_root);
	}
}
