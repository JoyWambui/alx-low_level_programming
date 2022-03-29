#include "main.h"

/**
 * _strspn- calculates the length of the initial segment of s which consists of characters in accept.
 *@s: string to be scanned.
 *@accept: list of characters to be matched
 *Return: number of bytes that match.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int length;

	length = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0' && accept[j] != s[i]; j++)
		{
		}
		if (s[i] == accept[j])
			length++;
		if (accept[j] == '\0')
			return (length);
	}
	return (length);
}
