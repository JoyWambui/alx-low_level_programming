#include "main.h"

/**
 * _pow_recursion - raises x to y.
 * @x: base number.
 * @y: power.
 * Return: value of x raised to y.
 */

int _sqrt_recursion(int n)
{
	int result;
	int i = 1;

	result = i * i;
	i++;
	if (result == n)
	{
		return (i - 1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (-1);
	}
	return (_sqrt_recursion(n));
}
