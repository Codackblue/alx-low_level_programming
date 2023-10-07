#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - changes the location of malloc files
 * @ptr: points to malloc file
 * @old_size: fikes to be sized
 * @new_size: sized for nice
 * Return: p 0
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *f, *of;
	unsigned int i = 0;

	if (old_size == new_size)
		return (ptr);
	if (ptr && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));

	f = malloc(new_size);
	if (f == NULL)
		return (NULL);
	of = ptr;

	if (new_size < old_size)
	{
		while (i < new_size)
		{
			f[i] = of[i];
			i++;
		}
	}
	if (old_size < new_size)
	{
		i = 0;
		while (i < old_size)
		{
			f[i] = of[i];
			i++;
		}
	}
	free(ptr);
	return (f);
}
