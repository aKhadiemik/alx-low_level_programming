#include <stdio.h>

/**
 * main - prints name of this program followed by newline
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: exit with success
 */

int main(int argc, char *argv[]) __attribute__((unused));

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
