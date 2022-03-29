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
	char ptr[100];
	int j = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			ptr[j] = s[i];
			j++;
		}
		ptr[j] = s[i];
		i++;
	}
	s = ptr;
	return (s);
}
