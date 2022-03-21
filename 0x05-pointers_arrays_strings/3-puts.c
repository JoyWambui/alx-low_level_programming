#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line, to stdout.
 * @str: pointer to characters.
 * Return: 0 success.
 */



void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
