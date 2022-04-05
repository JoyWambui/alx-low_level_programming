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
	unsigned int i = 0;

	dest = malloc(strlen(s1) + strlen(s2) + 1);
	if (dest == NULL)
	{
		return (NULL);
	}
	while (*s1 != '\0')
	{
		dest[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		dest[i] = *s2;
		s2++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
