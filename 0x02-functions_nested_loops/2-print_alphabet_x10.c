#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times followed by a new line.
 *
 * Return: Always 0.
 */



void print_alphabet_x10(void)
{
	char alphabet = 97;
	char nl = 0;

	while (alphabet < 12)
	{
		while (alphabet < 123)
		{
			_putchar(alphabet);
		}
		_putchar(10);
	}
	
	
}
