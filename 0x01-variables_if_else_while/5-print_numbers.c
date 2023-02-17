#include <stdio.h>

/**
 * main - prints all ints >= 0 and < 10
 * Return: If successful 0
 */

int main(void)
{
	int x = 0;

	while (x < 10)
	{
		printf("%d", x);
		x++;
	}

	printf("\n");
	return (0);
}
