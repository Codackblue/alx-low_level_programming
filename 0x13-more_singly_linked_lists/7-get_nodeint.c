#include "lists.h"

/**
 * get_nodeint_at_index - prrogram that returns node
 * @head: node 1 in the linked lisrts
 * @index: return node index
 *
 * Return: retunr pointer address
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *te = head;

	while (te && i < index)
	{
		te = (*te).next;
		i++;
	}

	return (te ? te : NULL);
}
