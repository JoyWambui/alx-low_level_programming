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
	arr = str;
	return (arr);
}
