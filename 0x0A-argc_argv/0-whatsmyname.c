#include <stdio.h>

/**
 * main - prints name of this program followed by newline
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: exit with success
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
