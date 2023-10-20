#include "lists.h"

/**
 * list_len - numbers for list and list.h
 * @h: list of pointer
 * Return: success (0)
 */
size_t list_len(const list_t *h)
{
	size_t vi = 0;

	while (h)
	{
		vi++;
		h = (*h).next;
	}
	return (vi);
}
