#include "main.h"

/**
 * clear_bit - value set
 * @n: decimal pointer change
 * @index: position of index
 * Return: 0 for suxcess else 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int in = 1;
	unsigned int ho;

	if (index > 64)
		return (-1);
	ho = index;
	while (ho > 0)
		in *= 2, ho--;

	if ((*n >> index) & 1)
		*n -= in;

	return (1);
}
