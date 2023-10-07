#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - for the allocation of memory dfiles
 * @b: number two of butes
 * Return: a very good pointer returned
 */

void *malloc_checked(unsigned int b)
{
	void *f = malloc(b);

	if (f == NULL)
	{
		exit(98);
	}
	return (f);
}
