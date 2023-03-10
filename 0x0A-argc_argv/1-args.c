#include <stdio.h>

/**
 * main - prints the number of arguments passed
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: success
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
