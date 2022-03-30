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
	if (*s)
	{
		n += 1;
		_strlen_recursion(s + 1);
	}
	return (n);
}
