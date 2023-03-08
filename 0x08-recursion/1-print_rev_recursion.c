#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 *@s: string
 */

void _print_rev_recursion(char *s)
{
	if (!(*s))
	{
		return;
	}
	char *next_char;
	*next_char = s + 1;

	_puts_recursion(next_char);
	_putchar(*s);
}
