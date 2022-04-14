#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all -  prints anything.
 *
 * @format: a list of types of arguments passed to the function.
 *
 */

void print_all(const char *const format, ...)
{
	int i = 0;
	char *p;
	va_list ap;
	char *sep = "";

	va_start(ap, format);
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", sep, va_arg(ap, int));
			sep = ", ";
			break;
		case 'i':
			printf("%s%i", sep, va_arg(ap, int));
			break;
		case 'f':
			printf("%s%f", sep, va_arg(ap, double));
			break;
		case 's':
			p = va_arg(ap, char *);
			if (p)
			{
				printf("%s%s", sep, p);
				break;
			}
			printf("(nil)");
			break;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
