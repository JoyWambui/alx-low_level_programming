#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - prints a grid of integers.
 * @grid: 2 dimensional grid.
 * @height: number of rows.
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i <=height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}