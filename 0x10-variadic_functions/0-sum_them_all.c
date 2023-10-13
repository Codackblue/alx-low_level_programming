#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - my parameters for calc
 * @n: my arg parameters
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int result = 0;
	va_list l;

	va_start(l, n);

	while (i < n)
	{
		result += va_arg(l, int);
		i++;
	}
	va_end(l);
	return (result);
}
