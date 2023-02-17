#include <stdio.h>

/**
 * main - putchar all possible combinations of two digits.
 * Number order - ascending, separation - commas, spaces
 * Limitations - putchar used < 6 times, no use of char
 * Return: If successful 0
 */

int main(void)
{
	int x, y;

	for (x = 48; x < 58; x++)
	{
		for (y = 49; y < 58; y++)
		{
			if (y > x)
			{
				putchar(x);
				putchar(y);
				if (x < 56 || y < 57)
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

