#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a funct that frees a 2 dimensional grid prevly  by alloc_grid
 * @grid: the grid of array
 * @height: the height of array
 * Return: success or error
 */

void free_grid(int **grid, int height)
{
	int dimeGrid;

	for (dimeGrid = 0; dimeGrid < height; dimeGrid++)
	{
		free(grid[dimeGrid]);
	}
	free(grid);
}
