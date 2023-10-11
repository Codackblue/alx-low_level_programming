#include "function_pointers.h"

/**
 * array_iterator - funvtions pointers to be executed
 * elemental
 * @array: iteration if they are arrays
 * @size: proper sixed arrays
 * @action: the function of my pointers
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && action)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
