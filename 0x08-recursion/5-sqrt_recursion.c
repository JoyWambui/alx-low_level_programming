#include "main.h"

/**
 * _pow_recursion - raises x to y.
 * @x: base number.
 * @y: power.
 * Return: value of x raised to y.
 */

int _sqrt_recursion(int n)
{
	int counter = 0;
	int i = 1;
	int result;

	if (n < 0)
	{
		return (-1);
	}
	else
	{
		n -= i;
		i += 2;
		counter ++ ;
		return (_sqrt_recursion(n));
	}
	return (counter);
}
