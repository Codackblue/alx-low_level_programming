#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - my parameter number to be printed
 * @separator: parameter strings
 * @n: my integrator thst was passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list l;

	va_start(l, n);

	while (i < n)
	{
		if (separator == NULL)
			printf("%d", va_arg(l, int));
		else if (separator && i == 0)
			printf("%d", va_arg(l, int));
		else
			printf("%s%d", separator, va_arg(l, int));
		i++;
	}
	va_end(l);
	printf("\n");
}
