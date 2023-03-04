#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: address of memory to print
 * @size: size of memory
 */

void print_buffer(char *b, int size)
{
	int offset, byte_idx, char_idx;

	offset = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (offset < size)
	{
		char_idx = size - offset < 10 ? size - offset : 10;
		printf("%08x: ", offset);
		for (byte_idx = 0; byte_idx < 10; byte_idx++)
		{
			if (byte_idx < char_idx)
				printf("%02x", *(b + offset + byte_idx));
			else
				printf("  ");
			if (byte_idx % 2)
			{
				printf(" ");
			}
		}
		for (byte_idx = 0; byte_idx < char_idx; byte_idx++)
		{
			int c = *(b + offset + byte_idx);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		offset += 10;
	}
}
