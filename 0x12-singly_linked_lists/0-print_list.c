#include "lists.h"

/**
 * print_list - a code for print
 * @h: pointer for printf
 * Return: return number for success
 */
size_t print_list(const list_t *h)
{
	size_t m = 0;

	while (h)
	{
		if ((*h).str)
			printf("[%u] %s\n", (*h).len, (*h).str);
		else
			printf("[0] (nil)\n");
		h = (*h).next;
		m++;
	}
	return (m);
}
