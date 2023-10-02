#include "main.h"

/**
 * _strcat - concatenatesthe strings for me
 * @dest: string to make the string
 * @src: string for addition
 *
 * Return: a pointer to meet the end
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
