#include "lists.h"

/**
 * dlistint_len - returns the number of elements in
 * a double linked list
 * @h: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int fcount;

	fcount = 0;

	if (h == NULL)
		return (fcount);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		fcount++;
		h = h->next;
	}

	return (fcount);
}
