#include "main.h"

/**
 *  _strlen_recursion -  returns the length of a string.
 * @s: This is the C string whose length is determined.
 *
 * Return: length of string.
 */

int _strlen_recursion(char *s)
{
	int n = 0;
	if (*s != '\0')
	{
		n++;
		return n;
	}
	return (_strlen_recursion(s+1));
}