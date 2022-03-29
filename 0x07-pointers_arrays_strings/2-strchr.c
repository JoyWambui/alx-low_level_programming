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
	int k;
	int j;
	char *ptr;

	while (s[i] != '\0')
	{
		i++;
		s++;
	}
	j = i + 1;
	for (k = 0; k < j; k++)
	{
		if (s[k] == c)
		{
			ptr = &(s[k]);
			break;
		}
		s = ptr;
	}
	return (s);
}
