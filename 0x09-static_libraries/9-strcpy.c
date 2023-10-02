#include "main.h"

/**
 * *_strcpy - duplicates spring for me
 * includingone terminal
 * to theplace a buffer for me
 * @dest: pointer for me and you
 * @src: string to duplicate
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0, i = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
