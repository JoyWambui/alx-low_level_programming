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
	int count = 0;
	char temp[500];

	while (*s != '\0')
	{
		count++;
		s++;
	}
	j = count - 1;
	for (i = 0; i < count; i++)
	{
		s[j] = temp[i];
		j--;
	}
	_putchar(10);
}
