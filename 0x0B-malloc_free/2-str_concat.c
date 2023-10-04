#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - creates string for me
 * @s1: create a string
 * @s2: other created string
 * Return: 0 success
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i, j, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;

	while (s2 && s2[len2])
		len2++;

	s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s3 == NULL)
		return (NULL);
	i = 0;
	j = 0;

	if (s1)
	{
		while (i < len1)
		{
			s3[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (i < (len1 + len2))
		{
			s3[i] = s2[j];
			i++;
			j++;
		}
	}
	s3[i] = 0;

	return (s3);
}
