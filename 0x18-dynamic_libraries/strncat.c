#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
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
