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
		for (i = n; i < 58; i++)
		{
			for (j = i + 1; j < 58; j++)
			{
				putchar(n);
				putchar(i);
				putchar(32);
				putchar(i);
				putchar(j);  
				if (n == 56 && i == 56 && j == 57)
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
