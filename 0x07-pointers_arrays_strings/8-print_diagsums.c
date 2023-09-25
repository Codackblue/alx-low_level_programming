#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the diagonals
 * of a square matrix
 * @a: square matrix of codes
 * @size: matrix sizes
 */

void print_diagsums(int *a, int size)
{
	int i = 0;

	unsigned int sum = 0, sum1 = 0;

	while (i < size)
	{
		sum += a[(size * i) + i];
		sum1 += a[(size * (i + 1)) - (i + 1)];
		i++;
	}
	printf("%d, %d\n", sum, sum1);
}
