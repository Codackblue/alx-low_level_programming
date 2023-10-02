#include "main.h"

/**
 * *_strspn - gets the length
 * @s: string for me
 * @accept: string container
 *
 * Return: the numbe for me that is the bytes
 * of s which contains the least sides
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
