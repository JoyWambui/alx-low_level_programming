#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees a grid of pointers to integers.
 * @grid: 2 dimensional grid.
 * @height: number of rows.
 *
 */
void free_grid(int **grid, int height)
{
	int i;
	if (grid == NULL)
	{
	}
	for (i = 0; i <= height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
