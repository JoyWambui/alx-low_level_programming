#include "main.h"
#include <string.h>
/**
 * reverse_array- function that reverses an array.
 *@a: integer array to be reversed
 *@n: second string.
 * Return: pointer to the resulting string.
 */

void reverse_array(int *a, int n)
{
	int temp[100];
	int i;

	for (i = 0; i < n; i++)
	{
		temp[i] = a[n - 1 - i];
	}
	for (i = 0; i < n; i++)
	{
		a[i] = temp[i];
	}
}
