#include "main.h"

/**
 * print_rev - function that prints a string,
 * in reverse, followed by a new line.
 * @s: pointer to character.
 * Return: 0 success.
 */



void print_rev(char *s)
{
	int i ;

	for (i = 0; i > 0; i++)
	{
		s++;
		if (*s == '\0')
		{
			_putchar(*s--);
			break;
		}
		
	}
	_putchar(10);
}
