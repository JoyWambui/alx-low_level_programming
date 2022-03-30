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

	if (n / i == i && i != n)
	{
		return (i);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (-1);
	}
	i++;
	return (_sqrt_recursion(n));
}
