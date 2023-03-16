#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _isdigit - checks if character is digit
 *
 * @c: character to check
 *
 * Return: 1 if c is digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - calculates length of string
 *
 * @s: string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}

/**
 * _mul - multiplies two positive numbers represented as strings
 *
 * @num1: multiplicand
 * @num2: multiplicand
 *
 * Return: string representing result of the multiplication
 */

char *_mul(char *num1, char *num2)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int i, j, carry, digit, val;
	char *result;

	result = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!result)
		exit(98);

	for (i = 0; i < len1 + len2; i++)
		result[i] = '0';
	result[i] = '\0';

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			val = (num1[i] - '0') * (num2[j] - '0') + carry + (result[i + j + 1] - '0');
			carry = val / 10;
			digit = val % 10;
			result[i + j + 1] = digit + '0';
		}
	result[i + j + 1] = carry + '0';
	}

	while (*result == '0' && *(result + 1))
		result++;

	return (result);
}

/**
 * mul - multiplies two positive numbers
 *
 * @num1: the first number to multiply
 * @num2: the second number to multiply
 */

void mul(char *num1, char *num2)
{
	int i;

	for (i = 0; num1[i]; i++)
	{
		if (!_isdigit(num1[i]))
		{
			printf("Error\n");
			exit(98);
		}
	}

	for (i = 0; num2[i]; i++)
	{
		if (!_isdigit(num2[i]))
		{
			printf("Error\n");
			exit(98);
		}
	}

	printf("%s\n", _mul(num1, num2));
}

/**
 * main - entry point
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 98 on failure
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	mul(argv[1], argv[2]);

	return (0);
}

