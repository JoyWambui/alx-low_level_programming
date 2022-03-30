#include "main.h"

/**
 *  _print_rev_recursion -  prints a string in reverse.
 * @s: This is the C string to be reversed.
 *
 * Return: void.
 */

void _print_rev_recursion(char *s)
{
	int i = 0;
	if (*s != '\0')
	{
		i++;
	}
	if (i == 0)
	{
		return;
	}
	_putchar(s[i]);
	i--;
	_puts_recursion(s);
}
