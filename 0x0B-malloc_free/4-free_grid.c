#include "main.h"

/**
 * alloc_grid -  frees a 2 dimensional grid previously created.
 *
 * @height: input height of grid
 * @grid:   grid itself
 * Return:  void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);	
	}

	free(grid);
	return (array);
}
