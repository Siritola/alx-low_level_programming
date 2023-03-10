#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free the memory allocated for the grid
 * created by alloc_grid()
 * @grid: grid to free
 * @height: height of grid
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

