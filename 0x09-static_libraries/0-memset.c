#include "main.h"

/**
 * *_memset - fills memory with a consistent bite and byte
 * @s: memory area to be formed
 * @b: char to retrieve
 * @n: number of times for me
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
