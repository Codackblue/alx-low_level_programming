#include "main.h"

/**
 * *_memcpy - copies two or more memories
 * @dest: destination i could
 * @src: all memory
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int mem = 0;

	while (mem < n)
	{
		dest[mem] = src[mem];
		mem++;
	}

	return (dest);
}
