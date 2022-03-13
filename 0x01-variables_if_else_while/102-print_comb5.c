#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;
	int i;
	int j;

	for (n = 48; n < 58; n++)
	{
		for (i = 48; i < 58; i++)
		{
			for (j = 49; j < 58; j++)
			{
				putchar(n);
				putchar(n);
				putchar(32);
				putchar(i);
				putchar(j);  
				if (n == 57 && i == 57 && j == 57)
				{
				}
				else
				{
					putchar(32);
					putchar(44);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
