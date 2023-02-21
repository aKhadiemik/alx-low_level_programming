#include "main.h"

/**
 * print_sign - prints whether number is signed or zero.
 * @n: variable accepts integers
 * Return: If +ve 1, if 0 0, else -1
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
