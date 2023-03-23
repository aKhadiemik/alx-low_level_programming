#include "variadic_functions.h"

/**
 * sum_them_all - sums all input variables
 *
 * @n: number of input vars
 *
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list operands;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(operands, n);

	for (i = 0; i < n; i++)
		sum += va_arg(operands, int);
	va_end(operands);
	return (sum);
}
