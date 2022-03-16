#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void){
	char alphabet;
	for (alphabet = 97; alphabet < 123; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar(10);
}
