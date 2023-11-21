#include <stdlib.h>
#include "main.h"


/**
 * free_grid - free memory allocated to a 2D grid
 * @grid: the 2D array to clean
 * @height: the number of its rows
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

