#include "main.h"

/**
 * reverse_array - function that reverses
 * @a: arrays for me
 * @n: nummber of elements of an array for me
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
