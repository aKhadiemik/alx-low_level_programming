#include <stdio.h>

/**
 * main - prints ints >=0 and < 10
 * x is an int, putchar used to display x
 * putchar used twice
 * Return: If successful 0
 */

int main(void)
{
	int  x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
