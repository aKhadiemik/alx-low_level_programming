#include "main.h"

/**
 * print_times_table - displays multiplication table for given integer n
 * @n: integer 0 > n < 15
 */

void print_times_table(int n)
{
	int z, y, x = 0;

	if (n < 0 || n > 15)
		return;
	while (x <= n)
	{
		for (y = 0; y <= n; y++)
		{
			z = x * y;
			if (z > 99)
			{
				_putchar(z / 100 + 48);
				_putchar((z / 10 % 10) + 48);
				_putchar(z % 10 + 48);
			}
			else if (z > 9)
			{
				_putchar(32);
				_putchar(z / 10 + 48);
				_putchar(z % 10 + 48);
			}
			else if (y != 0)
			{
				_putchar(32);
				_putchar(32);
				_putchar(z + 48);
			}
			else
				_putchar(z + 48);

			if (y != n)
			{
				_putchar(44);
				_putchar(32);
			}
		}
		_putchar('\n');
		x++;
	}
}
