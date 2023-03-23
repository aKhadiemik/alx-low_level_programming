#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints name using given function ptr
 *
 * @name: name to print (non-NULL)
 * @f: ptr to fn that prints name
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (!(name && f))
		return;
	f(name);
}
