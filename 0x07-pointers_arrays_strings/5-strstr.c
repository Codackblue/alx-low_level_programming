#include "main.h"
#include <stdio.h>

/**
 * *_strstr - localizes a string
 * @haystack: stop haystacking
 * @needle: substitution
 *
 * Return: pointer me
 * or NULL if so
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	while (haystack[i] != '\0')
	{
		j = 0;

		while (needle[j] != '\0')
		{
			if (haystack[i + j] != needle[j])
				break;
			j++;
		}
		if (!needle[j])
			return (&haystack[i]);
		i++;
	}
	return (NULL);
}
