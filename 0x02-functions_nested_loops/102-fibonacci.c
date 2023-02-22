#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers, 1, 2,...
 * Return: 0
 */

int main(void)
{
	unsigned long int q, r, s;

	r = 1;
	s = 2;

	printf("%lu", r);
	for (q = 1; q < 50; q++)
	{
		printf(", %lu", s);
		s = s + r;
		r = s - r;
	}

	printf("\n");

	return (0);
}
