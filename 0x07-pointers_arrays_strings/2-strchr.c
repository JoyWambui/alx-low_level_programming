#include "main.h"

/**
 * _strchr- locates a character in a string.
 *@s: pointer to the string being searched.
 *@c: character to be located.
 *Return: a pointer to the first occurence of c or NULL if c is not found.
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	char *ptr;

	while (s[i])
	{
		if (s[i] == c)
		{
			ptr = &s[i];
		}
		i++;
	}
	s = ptr;
	return (s);
}
