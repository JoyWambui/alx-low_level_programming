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
	unsigned int j = 0;

	dest = malloc(strlen(s1) + strlen(s2) + 1);
	if (dest == NULL)
	{
		return (NULL);
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		s1[(strlen(s1)) + i] = s2[i];
	}
	s1[strlen(s1) + 1] = '\0';
	for (j = 0; j < strlen(s1); j++)
	{
		dest[j] = s1[j];
	}
	return (dest);
}
