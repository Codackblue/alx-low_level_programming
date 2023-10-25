#include "lists.h"

/**
 * listint_len - prints rhe number elements
 * @h: type linkset of a linked list
 * Return: nodes number
 */
size_t listint_len(const listint_t *h)
{
	size_t po = 0;

	while (h)
	{
		po++;
		h = (*h).next;
	}

	return (po);
}
