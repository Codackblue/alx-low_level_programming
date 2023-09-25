#include "main.h"

/**
 * print_chessboard - printschessboard codes
 * @a: two dimension array for me and more
 */

void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	while (i <= 7)
	{
		j = 0;

		while (j <= 7)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
