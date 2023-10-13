#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - random printing
 * @format: variadic list
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *s, *se = "";

	va_list l;

	va_start(l, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", se, va_arg(l, int));
					break;
				case 'i':
					printf("%s%d", se, va_arg(l, int));
					break;
				case 'f':
					printf("%s%f", se, va_arg(l, double));
					break;
				case 's':
					s = va_arg(l, char *);
					if (s == NULL)
						s = "(nil)";
					printf("%s%s", se, s);
					break;
				default:
					i++;
					continue;
			}
			se = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(l);
}
