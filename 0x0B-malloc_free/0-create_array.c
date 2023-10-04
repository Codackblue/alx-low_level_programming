#include <stdlib.h>
#include "main.h"

/**
 * *create_array - arrays to be created
 * and does this by initialization
 * @size: not stated
 * @c: char for specialization
 * Return: pointen return 0 success
 */

char *create_array(unsigned int size, char c)
{
	char *f;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	f = (char *) malloc(sizeof(char) * size);

	if (f == NULL)
		return (0);

	while (i <= size - 1)
	{
		f[i] = c;
		i++;
	}
	f[i] = 0;
	return (f);
}
