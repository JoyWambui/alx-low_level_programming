#include "main.h"

/**
 * _memset- changes all lowercase letters of a string to uppercase.
 *@s: pointer to the block of memory to be filled.
 *@b: the value to be set.
 *@n: number of bytes to be set to the value.
 *Return: a pointer to the block of memory filled.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
