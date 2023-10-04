#include <stdlib.h>
#include "main.h"

/**
 * count_word - assistant gunction
 * @s: special string to add.
 * Return: value to add
 */
int count_word(char *s)
{
	int flag = 0, c = 0, w = 0;

	while (s[c] != '\0')
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
		c++;
	}

	return (w);
}
/**
 * **strtow - combine splits
 * @str: erasre error
 * Return: 0 success
 * or error
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (str[len])
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);
	i = 0;

	while (i <= len)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
		i++;
	}

	matrix[k] = NULL;

	return (matrix);
}
