#include <stdio.h>

/**
 * main - divisibility test. Prints 1 to 100 replacing digits as:
 * Prints Fizz for ints divisible by 3
 * Prints Buzz for ints divisible by 5,
 * FizzBuzz for ints divisible by 3 and 5
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("\n");

	return (0);
}

