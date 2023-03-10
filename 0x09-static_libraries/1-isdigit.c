#include "main.h"

/**
 * _isdigit - verifies characters in range 0-9 as digits
 * @c: integer
 * Return: if digit 1, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
