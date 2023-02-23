#include "main.h"
/**
 * print_square - prints square using provided character
 * @n: int describes size of square
 */

void print_square(int n)
{
	int i, j;

	if (n < 1)
		_putchar('\n');

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
}
