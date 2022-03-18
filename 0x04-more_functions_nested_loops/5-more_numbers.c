#include "main.h"

/**
 * more_numbers - prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 *
 */



void more_numbers(void)
{
	int num = 14;
	char nl = 0;

	while (nl < 12)
	{
		while (num >= '0' && num <= '14')
		{
			_putchar(num);
		}
		_putchar(10);
	}
}
