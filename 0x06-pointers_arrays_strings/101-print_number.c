#include "main.h"

/**
 * print_number - displays int
 * @n: int to be printed
 */

void print_number(int n)
{
	int i, digit, num_digits, temp, divisor;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	num_digits = 0;
	temp = n;
	while (temp > 0)
	{
		num_digits++;
		temp /= 10;
	}

	divisor = 1;
	for (i = 1; i < num_digits; i++)
	{
		divisor *= 10;
	}

	while (divisor > 0)
	{
		digit = n / divisor;

		_putchar(digit + '0');
		n -= digit * divisor;
		divisor /= 10;
	}
}
