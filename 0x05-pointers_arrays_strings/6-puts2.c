#include "main.h"

/**
 * puts2 - prints one character out
 * followed by a new line down
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int len = 0, s = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	while (s < len)
	{
		_putchar(str[s]);
		s += 2;
	}
	_putchar('\n');
}
