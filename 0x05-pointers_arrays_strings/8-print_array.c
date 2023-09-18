#include <stdio.h>
#include "main.h"

/**
 * print_array - prints the n elements for me
 * followed by creating a new line
 * @a: array to be printed
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i != 0)
			printf(", %d", a[i]);
		else
			printf("%d", a[i]);
		i++;
	}
		printf("\n");
}
