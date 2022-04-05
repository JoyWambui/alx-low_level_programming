#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * str_concat- concatenates two strings.
 * @s1: destination string.
 * @s2: string concatenated to s1.
 * Return: pointer containing contents of s1.
 */

char *str_concat(char *s1, char *s2)
{
	char *dest;
	int i;
	int j = 0;
	int k;
	int l;

	i = strlen(s1);
	while (s2[j])
	{
		s1[i + j] = s2[j];
		j++;
	}
	k = strlen(s1);
	dest = malloc(sizeof(char) * k);
	if (dest == NULL)
	{
		return (NULL);
	}
	for (l = 0; l < k; j++)
	{
		dest[k] = s1[k];
	}
	return (dest);
}
