#include <stdlib.h>
#include "main.h"

/**
 * *array_range - developed a value for storage
 * @min:maximum and minimun
 * @max: for the maximum
 * Return: 0
 */

int *array_range(int min, int max)
{
	int *f;
	int i = 0, s;

	if (min > max)
		return (NULL);

	s = max - min + 1;

	f = calloc(s, sizeof(int));

	if (!f)
		return (NULL);

	while (min <= max)
	{
		f[i] = min++;
		i++;
	}
	return (f);
}
