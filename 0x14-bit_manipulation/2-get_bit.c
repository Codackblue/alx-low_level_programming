#include "main.h"

/**
 * get_bit - bit value
 * @n: evaluqte nunber
 * @index: create an ibdex
 * Return: 0 (success)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int ho;

	if (index > 64)
		return (-1);

	ho = n >> index;

	return (ho & 1);
}
