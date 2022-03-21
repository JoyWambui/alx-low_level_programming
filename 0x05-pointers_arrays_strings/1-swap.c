#include "main.h"

/**
 * swap_int - switches the values of two integers.
 * @a:first integer to be swapped
 * @b: second integer to be swapped
 * Return: Nothing.
 */



void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
