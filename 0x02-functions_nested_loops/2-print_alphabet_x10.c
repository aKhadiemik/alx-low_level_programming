#include "main.h"

/**
 * print_alphabet_x10 - _putchar lowercase alphabet 10 times
 * _putchar implements write
 * Return: Upon success 0
 */

void print_alphabet_x10(void)
{
	char c;
	int iter;

	for (iter = 0; iter < 10; iter++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
