#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural
 * followed by a new line
 * @n: print from this number
 */
void print_to_98(int n)
{
	int x, y;

	if (n <= 98)
	{
		for (x = n; x <= 98; x++)
		{
			if (x != 98)
				printf("%d", x);
			else if (x == 98)
				printf("%d", x);
			printf(",");
			 printf(" ");
		}
	}
	else if (n >= 98)
	{
		for (y = n; y >= 98; y--)
		{
			if (y != 98)
				printf("%d", y);
			if (y == 98)
				printf("%d\n", y);
			printf(",");
			 printf(" ");
		}
	}
}

