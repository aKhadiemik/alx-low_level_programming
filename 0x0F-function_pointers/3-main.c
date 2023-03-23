#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple calculations
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b, result;
	char op_action;
	int (*op_chosen_action)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op_action = *argv[2];

	if ((op_action == '/'  || op_action == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	op_chosen_action = get_op_func(argv[2]);

	if (op_chosen_action == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = op_chosen_action(a, b);
	printf("%d\n", result);

	return (0);
}
