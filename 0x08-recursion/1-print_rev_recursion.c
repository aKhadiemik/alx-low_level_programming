#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 *@s: string
 */

void _print_rev_recursion(char *s)
{
	char *next_char;

	if (!(*s))
	{
		return;
	}
	next_char = s + 1;
	_print_rev_recursion(next_char);
	_putchar(*s);
}
