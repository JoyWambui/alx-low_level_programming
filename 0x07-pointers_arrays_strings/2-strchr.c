#include "main.h"
#include <stdio.h>

/**
 * _strchr- locates a character in a string.
 *@s: pointer to the string being searched.
 *@c: character to be located.
 *Return: a pointer to the first occurence of c or NULL if c is not found.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
		{
			s = &s[i];
			break;
		}
		else if (s[i] == '\0' && s[i] != c)
		{
			s = NULL;
			break;
		}
		i++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (s);
}
