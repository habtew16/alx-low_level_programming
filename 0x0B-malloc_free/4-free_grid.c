#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees memorey occupied by grid
 * @grid: is grid
 * @height: is the number of rows of grid
 * no return
*/


void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
