#include "main.h"

/**
 * print_last_digit - putchar last digit of provided int
 * @n: integer
 * Return: value of an integer's last digit
 */

int print_last_digit(int n)
{
	int m;

	if (n < 0)
	{
		m = -1 * (n % 10);
		_putchar(m + '0');
		return (m);
	}
	else
	{
		m = n % 10;
		_putchar(m + '0');
		return (m);
	}
}
