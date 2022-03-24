#include "main.h"
#include <string.h>
/**
 * string_toupper- changes all lowercase letters of a string to uppercase.
 *@char: pointer to characters to be changed
 * 
 * Return: a char
 */

char *string_toupper(char *str)
{
	char upper[100];
	int i;

	for (i = 0; i != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
	}
	for (i = 0; i != '\0'; i++)
	{
		upper[i] = str[i];
	}
	return (upper);
}