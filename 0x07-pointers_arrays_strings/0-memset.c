#include "main.h"

/**
 * *_memset - fills memory for me
 * @s: memory area.
 * @b: char to copy the code
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int mem = 0;

	while (mem < n)
	{
		s[mem] = b;
		mem++;
	}

	return (s);
}
