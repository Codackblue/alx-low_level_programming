#include "main.h"
#include <stdio.h>

/**
 * *_strstr -targets a string
 * @haystack:searching for my string
 * @needle: subs for the string
 *
 * Return: pointer to the end
 * or NULL if the sub are stutuing
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
