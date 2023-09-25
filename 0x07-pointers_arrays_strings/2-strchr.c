#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates an element in a string
 * @s: string to go through
 * @c: char to locate
 *
 * Return: a pointer to the first level
 * c in the string s, or NULL item if so.
 */

char *_strchr(char *s, char c)
{
		int a;

		while (1)
		{
			a = *s++;
			if (a == c)
			{
				return (s - 1);
			}
			if (a == '\0')
			{
				return (NULL);
			}
		}
}
