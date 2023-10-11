#include "function_pointers.h"

/**
 * int_index - intergers
 * @array: inside my arrays
 * @size: my size
 * @cmp: prigramed with piinters
 * Return: included for me cmp
 * the functions
 * filed cmp
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]) != 0)
				return (i);
			i++;
		}
	}
	return (-1);
}
