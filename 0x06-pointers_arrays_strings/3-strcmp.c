#include "main.h"
#include <string.h>
/**
 * _strcmp- function that compares two strings.
 *@s1: first string.
 *@s2: second string.
 * Return: pointer to the resulting string.
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int j;
	int k;

	for (i = 0; s1[i] != '\0'; i++)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			if (s1[i] < s2[j] || s1[i] > s2[j])
			{
				k = (s1[i] - s2[j]);
				break;
			}
			else
			{
				k = 0;
			}
		}
	}
	return (k);
}
