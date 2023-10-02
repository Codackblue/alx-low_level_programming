#include "main.h"

/**
 * *_memcpy - copies the string
 * @dest: destines the memory
 * @src: memory area for me
 * @n: number of strings
 *
 * Return: points the string
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
