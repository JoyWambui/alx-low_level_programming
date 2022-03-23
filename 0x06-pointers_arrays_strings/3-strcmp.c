#include "main.h"
#include <string.h>
/**
 * _strcmp- function that compares two strings.
 *@s1: first string.
 *@s2: second string.
 * Return: pointer to the resulting string.
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 > *s2 || *s1 < *s2)
	{
		return (*s1 - *s2);
	}
	else
	{
		return (0);
	}
}
