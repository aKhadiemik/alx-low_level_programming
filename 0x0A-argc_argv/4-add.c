#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - checks if character is digit
 * @c: character
 *
 * Return: 1 if ascii character between 0 and 9, else 0
 */

int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 1 if non-number input supplied, else 0
 */

int main(int argc, char *argv[])
{
	int sum, i;

	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		const char *arg = argv[i];
		const char *p;

		for (p = arg; *p != '\0'; p++)
		{
			if (!is_digit(*p))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(arg);
	}

	printf("%d\n", sum);
	return (0);
}
