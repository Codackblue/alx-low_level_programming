#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
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
