#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - searches the commited string
 * @s: string to tangel
 * @accept: string housing shelter
 *
 * Return: pointer to the boosteder
 * or NULL
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
