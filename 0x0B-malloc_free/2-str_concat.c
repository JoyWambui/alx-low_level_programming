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

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	dest = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (dest == NULL)
	{
		return (NULL);
	}
	while (*s1)
	{
		dest[i] = *s1;
		s1++;
		i++;
	}
	while (*s2)
	{
		dest[i] = *s2;
		s2++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
