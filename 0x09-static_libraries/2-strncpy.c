#include "main.h"

/**
 * _strncpy - copie all the strings for me
 * @dest: destines it for me
 * @src: sourcecode
 * @n: number  copy
 *
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int f = 0;

	while (src[f] != '\0' && f < n)
	{
		dest[f] = src[f];
		f++;
	}

	while (f < n)
	{
		dest[f] = '\0';
		f++;
	}

	return (dest);
}
