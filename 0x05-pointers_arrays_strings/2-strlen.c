#include "main.h"

/**
 * _strlen - returns my string of length
 * @s: string to check
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int strcount = 0;

	while (s[strcount] != '\0')
	{
		strcount++;
	}

	return (strcount);
}
