#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to 2 dim-array of ints
 *
 * @width: width of array
 * @height: height of array
 * Return: on success - 2-dim grid, on failure - NULL
 */

int **alloc_grid(int width, int height)
{
	int i, j, **grid;

	if (width <= 0 || height <= 0)
	{
		return ((void *) 0);
	}

	grid = (int **) malloc(height * sizeof(int *));
	if (grid == ((void *) 0))
	{
		return ((void *) 0);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *) malloc(width * sizeof(int));
		if (grid[i] == ((void *) 0))
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return ((void *) 0);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
