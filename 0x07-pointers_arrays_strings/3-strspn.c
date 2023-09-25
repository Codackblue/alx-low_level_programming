#include "main.h"

/**
 * *_strspn - gets the length of a whole string
 * @s: string to communicate
 * @accept: string containing the host
 *
 * Return: the number of byte or bites
 * of s which consist days
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, f = 0, flag;

	while (s[i] != '\0')
	{
		flag = 0;
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				f++;
				flag = 1;
			}
			j++;
		}
		if (flag == 0)
			return (f);
		i++;
	}
	return (0);
}
