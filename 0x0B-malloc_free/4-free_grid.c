#include <stdlib.h>
#include "main.h"

/**
 * free_grid - memory
 * created for me
 * @grid: for code
 * @height: grid
 */
void free_grid(int **grid, int height)
{
	int j = 0;

	if (grid != NULL || height != 0)
	{
	while (j < height)
	{
		free(grid[j]);
		j++;
	}
	free(grid);
	}
}
