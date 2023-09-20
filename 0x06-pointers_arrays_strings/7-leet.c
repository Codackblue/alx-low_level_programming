#include "main.h"

/**
 * leet - function that encodes for me
 * @n: input value for me
 * Return: n value
 */
char *leet(char *n)
{
	int i, j;

	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\n'; i++)
	{
		for (j = 0; s1[j] != '\0'; j++)
		{
			if (n[i] == s1[j])
			{
				n[i] = s2[j];
				break;
			}
		}
	}
	return (n);
}
