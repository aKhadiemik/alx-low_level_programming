#include <stdio.h>
#include <unistd.h>

/**
 * main - prints [quot] and that piece of art is usefuli [quot]
 * - Dora Korpar, 2015-10-19 [quot] \n to STDERR.
 * Return: Always returns 0
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
