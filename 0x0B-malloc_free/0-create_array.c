#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array.
 * @c: initializing char.
 * Return: pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	arr = (char *)malloc(sizeof(*arr) * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	else
	{
		arr[0] = c;
	}
	return (arr);
}
