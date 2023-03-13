#include "main.h"

/**
 * free_grid - frees the two dimensional array
 *
 * @grid: the two dimensional array
 * @height: height of the two dimension array
 */

void free_grid(int **grid, int height)
{
	while (height != 0)
	{
		free(grid[height]);
		height--;
	}
	free(grid);
}
