#include "main.h"

/**
 * print_chessboard - prints out chessboard
 * @a: 2-d array of characters
 */

void print_chessboard(char (*a)[8])
{
	/*
	 * if (a == ((void *) 0))
	{
		return (-1);
	}
	*/

	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			/*
			 * if (a[i][j] < 0 || a[i][j] > 127)
			{
				return (-1);
			}
			*/
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
