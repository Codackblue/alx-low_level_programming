#include "main.h"

/**
 * _strncat - concatenating strings
 * @dest: destines it tfo me
 * @src: source code
 * @n: number of bytes of stiring bites
 *
 * Return: a pointerfor me
 */
char *_strncat(char *dest, char *src, int n)
{
	int f = 0, s = 0;

	while (dest[f] != '\0')
		f++;

	while (src[s] != '\0' && s < n)
	{
		dest[f] = src[s];
		f++;
		s++;
	}

	dest[f] = '\0';

	return (dest);
}
