#include "main.h"

/**
 * _sqrt_recursion - finds the square root of a number
 * @n: number whose squareroot is being found.
 * Return: wrapper function.
 *
 * sqrt_wrapper - compares a number with the square of another.
 */

int _sqrt_recursion(int n)
{
	int i = 1;

	int sqrt_wrapper(int n, int i);
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_wrapper(n, i));
}

int sqrt_wrapper(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else
	{
		i += 1;
		return (sqrt_wrapper(n, i));
	}
}
