#include "main.h"
/**
 * print_last_digit - produces the last digit for me
 * @n: the int to extract the last digit from
 * Return: value of the last digit 0
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;
	a = n % 10;
	if (a < 0)
		a = -a;
	_putchar(a + '0');
	return (a);
}

