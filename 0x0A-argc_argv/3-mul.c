#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 integers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if 2 arguments supplied, 1 if not
 */

int main(int argc, char *argv[])
{
	int mul_ti, pli_cand, product;

	while (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	mul_ti = atoi(argv[1]);
	pli_cand = atoi(argv[2]);
	product = mul_ti * pli_cand;

	printf("%d\n", product);

	return (0);
}
