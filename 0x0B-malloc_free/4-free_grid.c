#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2-dim grid created by alloc_grid
 *
 * @grid: 2-dim array
 * @height: height of array
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
