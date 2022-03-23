#include "main.h"
#include <string.h>
/**
 * _strcat - function that concatenates two strings.
 *@dest: pointer to resultant string.
 *@src: string to be concatenated to dest.
 * Return: pointer to the resulting string.
 */

char *_strcat(char *dest, char *src)
{
	int length = strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[length + i] = src[i];
	}
	dest[length + i] = '\0';
	return (dest);
}
