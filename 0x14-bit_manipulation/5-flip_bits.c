#include "main.h"

/**
 * flip_bits - convert flips
 * @n: number 1
 * @m: number 2
 * Return: bit number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int di = n ^ m;
	int count = 0;

	while (di)
	{
		count++;
		di &= (di - 1);
	}

	return (count);
}
