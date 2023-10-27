#include "main.h"

/**
 * set_bit - bit value
 * @n: pointer decimal
 * @index:position of index
 * Return: 1 worked gives success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int po = 1;

	if (index > 64)
		return (-1);

	while (index > 0)
		index--, po *= 2;
	*n += po;

	return (1);
}
