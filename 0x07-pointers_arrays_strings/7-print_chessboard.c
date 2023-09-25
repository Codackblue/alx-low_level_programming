#include "main.h"

/**
 * print_chess for me
 * @a: two dimers
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
