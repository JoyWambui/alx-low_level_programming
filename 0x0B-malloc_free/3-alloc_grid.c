#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * alloc_grid- returns a pointer to a 2 dimensional array of integers.
 * @width: array in 2d array.
 * @height: array in 2d array.
 * Return: pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **pointer_array;
	int i;
	int j;
	int k;

	if ((width == 0 || width < 0) || (height == 0 || height < 0))
	{
		return (NULL);
	}
	pointer_array = (int **) malloc(height * sizeof(int *));
	if (pointer_array == NULL)
	{
		return (NULL);
	}
	pointer_array[0] = malloc(height * width * sizeof(int));
	for (i = 1; i < height; i++)
	{
		pointer_array[i] = pointer_array[0] + i * width;
	}
	if (pointer_array)
	{
		for (j = 0; j < height; j++)
		{
			for (k = 0; k < width; k++)
			{
				pointer_array[i][j] = 0;
			}
		}
	}
	else
	{
		for (i = 0; i < height; i++)
			free(pointer_array[i]);
		free(pointer_array);
	}
	return (pointer_array);
}