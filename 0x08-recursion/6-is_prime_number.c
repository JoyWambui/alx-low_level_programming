#include "main.h"

/**
 * is_prime_number - checks if a number is prime.
 * @n: number to be checked.
 * Return: prime_wrapper function.
 *
 */

int is_prime_number(int n)
{
	int i = 1;

	int prime_wrapper(int n, int i);
	if (n <= 1)
	{
		return (0);
	}
	return (prime_wrapper(n, i));
}
/**
 * prime_wrapper - divides a number by the second, checks remainder.
 * @n: number to be divided.
 * @i: number to divide.
 * Return: 1 if prime and 0 otherwise.
 */
int prime_wrapper(int n, int i)
{
	if (n % i == 0 && i != n)
	{
		return (0);
	}
	else
	{
		return (1);
	}
	i += 1;
	prime_wrapper(n,i);
}