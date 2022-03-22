#include "main.h"

/**
 * rev_string - function that reverses a string,
 * @s: pointer to character.
 * Return: 0 success.
 */

void rev_string(char *s)
{
	int i;
	int count = 0;
	char c;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	for (i = 0; i < count / 2; i++)
	{
		c = s[i];
		s[i] = s[count - i - 1];
		s[count - i - 1] = c;
	}
	_putchar(10);
}
