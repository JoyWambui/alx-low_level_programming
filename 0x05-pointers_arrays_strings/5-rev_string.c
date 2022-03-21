#include "main.h"

/**
 * rev_string - function that reverses a string,
 * @s: pointer to character.
 * Return: 0 success.
 */

void rev_string(char *s)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar(10);
}