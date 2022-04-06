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
	height--;

	while (height >= 0)
	{
		free(*(grid + height));
		height--;
	}
	free(grid);
}
