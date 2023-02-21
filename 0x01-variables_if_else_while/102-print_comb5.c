#include <stdio.h>

/**
 * main - puthcar (used < 8 times) all combinations of two 2-digit numbers.
 * Domain - 0 to 99, Element in Range - 2 2-dig no separated by space
 * Each element separated by space, comman, Order - ascending
 * 00 01 and 01 00 are not distinct
 * You can only use `putchar` to print to console.
 * Limitation - no char type.
 * Return: If successful 0
 */

int main(void)
{
	int x, y;

	for (x = 0; x < 100; x++)
	{
		for (y = 0; y < 100; y++)
		{
			if (x < y)
			{
				putchar((x / 10) + 48);
				putchar((x % 10) + 48);
				putchar(32);
				putchar((y / 10) + 48);
				putchar((y % 10) + 48);

				if (x != 98 || y != 99)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
