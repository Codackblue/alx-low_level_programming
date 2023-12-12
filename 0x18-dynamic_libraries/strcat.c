#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int f = 0, s = 0;

	while (dest[f] != '\0')
	{
		f++;
	}

	while (src[s] != '\0')
	{
		dest[f] = src[s];
		f++;
		s++;
	}
	dest[f] = '\0';
	return (dest);
}
