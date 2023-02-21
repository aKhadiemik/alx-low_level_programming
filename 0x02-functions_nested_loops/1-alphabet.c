#include "main.h"

/**
 * print_alphabet - _putchar alphabet in lowercase
 * _putchar implements write
 * Return: If success 0
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
