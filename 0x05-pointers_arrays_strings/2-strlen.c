#include "main.h"

/**
 * _strlen - returns length of a given string.
 * @s: pointer to character.
 * Return: 0 success.
 */



int _strlen(char *s)
{
	int end = 0;
	while (*s < '\0')
	{
		end = end + 1;
		s++;
	}
	return end;
}
