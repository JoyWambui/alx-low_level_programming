#include "main.h"

/**
 * print_rev - function that prints a string,
 * in reverse, followed by a new line.
 * @s: pointer to character.
 * Return: 0 success.
 */



void print_rev(char *s)
{
	int i = 0;
	int j;

	while (*s != '\0')
	{
		i+=1;
		s++;
	}
	for (j = i; j < 0; j--)
	{
		_putchar(j);
	}
}
