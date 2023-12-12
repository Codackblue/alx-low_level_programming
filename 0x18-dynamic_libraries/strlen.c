#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
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
