#include "main.h"

/**
 * _strlen - returns the knowlegde
 * @s: string to the wjold
 *
 * Return: the length
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
