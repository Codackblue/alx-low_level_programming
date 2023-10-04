#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - duplicates the code
 * @str: duplication of desired string
 * Return: 0 success
 */

char *_strdup(char *str)
{
	unsigned int i = 0, len = 0;
	char *d;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	d = malloc(sizeof(char) * (len + 1));

	if (d == NULL)
		return (NULL);

	while ((d[i] = str[i]) != 0)
		i++;

	return (d);
}
