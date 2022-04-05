#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: pointer to string.
 * Return: pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	char *arr;
	unsigned int i;
	unsigned int j;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*str != '\0')
	{
		i++;
	}
	arr = malloc(sizeof(char) * i);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		arr[j] = str[j];
	}
	return (arr);
}
