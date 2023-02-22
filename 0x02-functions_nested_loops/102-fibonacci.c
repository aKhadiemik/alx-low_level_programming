#include <stdio.h>


int main(void)
{
	unsigned long int i, j, k;

	j = 1;
	k = 2;

	printf("%lu, ", j);
	for (i = 1; i < 50; i++)
	{
		printf(", %lu", k);
		k = k + j;
		j = k - j;
	}

	printf("\n");

	return (0);
}
