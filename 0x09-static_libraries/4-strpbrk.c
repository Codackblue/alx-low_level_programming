#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk -investigate a sar strig
 * @s: string for me
 * @accept: string that has a cont
 *
 * Return: pointer to the bye for point
 * or NULL if yes print a byte
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (*s != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (*s == accept[j])
			{
				return (s);
			}
			j++;
		}
		s++;
		i++;
	}
	return (NULL);
}
