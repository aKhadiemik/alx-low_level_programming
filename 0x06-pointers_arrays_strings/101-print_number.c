#include "main.h"

/**
 * print_number - displays int
 * @n: int to be printed
 */

void print_number(int n)
{
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

	int num_digits = 0;
	int temp = n;

	while (temp > 0)
	{
		num_digits++;
		temp /= 10;
	}

	int divisor = 1;

	for (int i = 1; i < num_digits; i++)
	{
		divisor *= 10;
	}

	while (divisor > 0)
	{
		int digit = n / divisor;

		_putchar(digit + '0');
		n -= digit * divisor;
		divisor /= 10;
	}
}
