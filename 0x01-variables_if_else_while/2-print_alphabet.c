
#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Return: 0 (success)
 */
int main(void)
{
	int small;
	int new_line;

	for (small = 97; small < 123; small++)
	{
		putchar(small);
	}
	new_line = 32;
	putchar(32);
	return (0);
}
