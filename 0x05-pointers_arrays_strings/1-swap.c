#include "main.h"

/**
 *  swap_int - chanhes the value of two integers
 *  @a: integer to swap
 *  @b: integer to swap
 */
void swap_int(int *a, int *b)
{
	int y;

	y = *a;
	*a = *b;
	*b = y;
}
