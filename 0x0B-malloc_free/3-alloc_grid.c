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
	int *data;
	int i;
	int j;
	int k;

	if ((width == 0 || width < 0) || (height == 0 || height < 0))
	{
		return (NULL);
	}
	data = malloc(sizeof(int) * width * height);
	pointer_array = malloc(sizeof(int *) * width);
	if (pointer_array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		pointer_array[i] = data + (i * height);
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			pointer_array[i][j] = 0;
		}
	}
	free(pointer_array);
	return (pointer_array);
}
