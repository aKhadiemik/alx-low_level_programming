#include "main.h"

/**
 * _isalpha - is character a member of the alphabet
 * @c: takes in ASCII values
 * Return: if member of the alphabet 1, else 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
