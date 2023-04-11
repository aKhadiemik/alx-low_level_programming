#include "main.h"

/**
 * print_binary - prints binary notation for input int
 * @n: int
 */

#include <stdio.h>

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int bin_output = 0;

	while (mask > 0)
	{
		if ((n & mask) == 0)
		{
			if (bin_output)
			{
				_putchar('0');
			}
		}
		else
		{
			_putchar('1');
			bin_output = 1;
		}
		mask >>= 1;
	}

	if (!bin_output)
	{
		_putchar('0');
	}

	_putchar('\n');
}
