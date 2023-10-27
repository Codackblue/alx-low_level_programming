#include "main.h"

/**
 * get_endianness - endianness checker
 * Return: return 0
 */
int get_endianness(void)
{
	int no  = 1;

	if (*(char *)&no == 1)
		return (1);
	else
		return (0);
}
