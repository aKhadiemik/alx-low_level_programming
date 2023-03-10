#include "main.h"

/**
 * _islower - check whether lowercase
 * @c: accepts ASCII input
 * Return: if lowercase 1, else 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
