#include "main.h"

/**
 * main - prints _putchar + \n.
 * Limitation: No std libs used
 * Return: Upon success 0
 */

int main(void)
{
	char charArray[] = "_putchar";
	int i = 0;

	while (charArray[i] != '\0')
	{
		_putchar(charArray[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
