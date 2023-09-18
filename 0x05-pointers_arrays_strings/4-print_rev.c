#include "main.h"

/**
 * print_rev - prints a string
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i, maxlen;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	maxlen = i - 1;

	while (maxlen >= 0)
	{

		_putchar(s[maxlen]);
		maxlen--;
	}

	_putchar('\n');
}
