#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line.
 * 
 * Return: Always 0.
 */



void print_alphabet(void)
{
	char alphabet;
	
	for (alphabet = 97; alphabet < 123; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar(10);
}
