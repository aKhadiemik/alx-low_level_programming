#include <stdio.h>

/**
 * main - displays 2nd to 98th member of Fibonacci seq
 * that is, 1, 2, ... , 218_922_995_834_555_169_026
 * followed by a new line
 * Return: If success 0
 */


int main(void)
{
	unsigned long int x, y, z, a, b, c, d;

	y = 1;
	z = 2;

	printf("%lu", y);

	for (x = 1; x < 91; x++)
	{
		printf(", %lu", z);
		z = z + y;
		y = z - y;
	}

	a = y / 1000000000;
	b = y % 1000000000;
	c = z / 1000000000;
	d = z % 1000000000;

	for (x = 92; x < 99; ++x)
	{
		printf(", %lu", c + (d / 1000000000));
		printf("%lu", d % 1000000000);
		c = c + a;
		a = c - a;
		d = d + b;
		b = d - b;
	}

	printf("\n");

	return (0);
}
