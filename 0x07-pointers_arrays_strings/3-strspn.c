#include "main.h"

/**
 * _strspn- calculates the length of the initial segment of s which consists of characters in accept.
 *@s: string to be scanned.
 *@accept: list of characters to be matched
 *Return: number of bytes that match.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int k = 0;

	for (; *s != '\0'; s++)
	{
		for (; *accept != '\0'; accept++)
		{
			if (*s == *accept)
			{
				k += 1;
			}
			else
			{
				k = k;
			}			
		}
	}
	return (k);
}
