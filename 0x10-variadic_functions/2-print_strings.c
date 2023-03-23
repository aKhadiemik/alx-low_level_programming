#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints stings passed to it
 *
 * @separator: separates elements of output
 * @n: number of arguments passed to fn
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string_list;
	char *arr;
	unsigned int i;

	va_start(string_list, n);

	for (i = 0; i < n; i++)
	{
		arr = va_arg(string_list, char *);
		printf("%s", (arr == NULL) ? "(nil)" : arr);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n"), va_end(string_list);
}
