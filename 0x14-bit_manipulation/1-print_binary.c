#include "main.h"
#include <stdio.h>

/**
 * print_binary - hiatory print representation
 * @n: number decimal
 */
void print_binary(unsigned long int n)
{
	unsigned long int te = n;
	int shi = 0;

	if (n != 0)
	{
		while ((te >>= 1) > 0)
			shi++;
		while (shi >= 0)
		{
			if ((n >> shi) & 1)
				printf("1");
			else
				printf("0");
			shi--;
		}
	}
	else
	{
		printf("0");
	}
}
