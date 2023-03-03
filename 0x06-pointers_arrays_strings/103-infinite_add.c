#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * infinite_add - add 2 numbers together
 * @n1: number to add
 * @n2: number to add
 * @r: buffer
 * @size_r: buffer size
 * Return: pointer to sum
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{

	int carry, len1, len2, i, j, k, sum;

	carry = 0, len1 = strlen(n1), len2 = strlen(n2);

	if (len1 + 1 > size_r || len2 + 1 > size_r)
		return (0);

	i = len1 - 1, j = len2 - 1, k = size_r - 2;
	r[size_r - 1] = '\0';

	while (i >= 0 || j >= 0 || carry)
	{
		sum = carry + (i >= 0 ? n1[i] - '0' : 0) + (j >= 0 ? n2[j] - '0' : 0);
		if (k < 0)
			return (0);

		carry = sum / 10;
		r[k--] = sum % 10 + '0';
		if (i >= 0)
			i--;
		if (j >= 0)
			j--;
	}

	return (&r[k + 1]);
}
