#include "main.h"

/**
 * _puts - prints avery good string
 * @str: pointer to the me
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
