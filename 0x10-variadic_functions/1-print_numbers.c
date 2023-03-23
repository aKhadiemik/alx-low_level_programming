#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints input numbers
 *
 * @separator: separates output elements
 * @n: number of arguments
 *
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num_list;
	unsigned int i;

	va_start(num_list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num_list, unsigned int));
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n"), va_end(num_list);
}
