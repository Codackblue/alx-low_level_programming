#include "main.h"

/**
 * _strncpy -  function that produces strings
 * @dest: function parameter for strings function
 * @src: function parameteis
 * @n: function parameter
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
