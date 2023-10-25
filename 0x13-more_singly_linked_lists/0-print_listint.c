#include "lists.h"
#include <stdio.h>

/**
 * print_listint - elements of a linked list
 * @h: link_ser type of list
 * Return: nodes number
 */
size_t print_listint(const listint_t *h)
{
	size_t po = 0;

	while (h)
	{
		po++;
		printf("%i\n", (*h).n);
		h = (*h).next;
	}
	return (po);
}
