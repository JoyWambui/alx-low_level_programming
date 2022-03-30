#include "main.h"

/**
 * _pow_recursion - raises x to y.
 * @x: base number.
 * @y: power.
 * Return: value of x raised to y.
 */

int _sqrt_recursion(int n)
{
	int i = 1;
	return sqrt_wrapper(n, i);
}
int sqrt_wrapper(n, i)
{
	if (i * i == n)
	{
		return (i);
	}
	else
	{
		i += 1;
		return sqrt_wrapper(n, i);
	}
}
