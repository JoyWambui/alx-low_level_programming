#include "main.h"
#include <string.h>
/**
 * _strncat - function that concatenates two strings.
 *@dest: pointer to resultant string.
 *@src: string to be concatenated to dest.
 *@n: number of bytes in src.
 * Return: pointer to the resulting string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int length = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[length + i] = src[i];
	}
	dest[length + i] = '\0';
	return (dest);
}
