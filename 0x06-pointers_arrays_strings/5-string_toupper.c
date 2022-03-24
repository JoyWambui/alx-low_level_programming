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
	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 123)
		{
			*str -= 32;
		}

		str++;
	}
	return (str);
}