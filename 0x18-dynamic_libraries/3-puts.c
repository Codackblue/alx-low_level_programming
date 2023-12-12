#include "main.h"

/**
 * _puts - prints a string
 * @str: pointer to the string to print
 */
void _puts(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
