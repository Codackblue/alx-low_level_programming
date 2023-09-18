#include "main.h"

/**
 * puts_half - prints halves of strings
 * followed by new lines
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int len = 0, n, i;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		i = len / 2;
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	} else
	{
		n = (len - 1) / 2;
		while (n < len - 1)
		{
			_putchar(str[n + 1]);
			n++;
		}
	}
	_putchar('\n');
}
