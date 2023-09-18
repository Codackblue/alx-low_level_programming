#include "main.h"

/**
 * _puts - prints a string for me and give a value
 * @str: pointer to the string to prints
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
