#include "main.h"

/**
 * _strcmp - creates one or two string
 * @s1: firstput all string
 * @s2: second and thrid
 *
 * Return: less than 0 for me
 * more than 0 if s1 for me
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
