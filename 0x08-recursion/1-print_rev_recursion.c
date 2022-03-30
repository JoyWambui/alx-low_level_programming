#include "main.h"

/**
 *  _print_rev_recursion -  prints a string in reverse.
 * @s: This is the C string to be reversed.
 *
 * Return: void.
 */

void _print_rev_recursion(char *s)
{
	char *temp = s;

	if (*s != '\0')
	{
		s++;
	}
	if (temp == s)
	{
		return;
	}
	
	_putchar(*s);
	s--;
	_print_rev_recursion(s);
}
