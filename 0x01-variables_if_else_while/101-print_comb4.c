#include <stdio.h>

/**
 * main -putchar all possible combinations of 3 digits
 * Arrangement - ascending order, separation - commas, space.
 * Limitation - putchar used < 6 times, no char type
 * All displayed numbers have 3 digits
 * Return: If successful 0
 */

int main(void)
{
	int x, y, z;

	for (x = 48; x < 58; x++)
	{
		for (y = 49; y < 58; y++)
		{
			for (z = 50; z < 58; z++)
			{
				if (y > x && z > y)
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if (x != 55 || y != 56 || z != 57)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
