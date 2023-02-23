#include "main.h"
/**
 * print_square - prints square using provided character
 * @n: int describes size of square
 */

void print_square(int n)
{
	int i, square_area;

	square_area = n * n;

	if (n < 0)
		_putchar('\n');

	for (i = 0; i < square_area; i++)
	{
		_putchar('#');
		if ((i + 1) % n == 0)
		{
			_putchar('\n');
		}
	}
}
