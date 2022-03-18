#include <stdio.h>
#include "main.h"

/**
 * _isupper - Checks for an uppercase character.
 * @c: a given character
 * Return: 1 if c is uppercase and 0 otherwise.
 */



int  _isupper(int c)
{
	int i;

	for (i = 65; i < 91; i++)
	{
		if (c == i)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
