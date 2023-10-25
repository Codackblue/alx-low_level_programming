#include "lists.h"

/**
 * insert_nodeint_at_index - put new node
 *
 * @head: point to first node
 * @idx: find first node index
 * @n: put data
 *
 * Return: null or pointer address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t i;
	listint_t *ne;
	listint_t *te = *head;

	ne = malloc(sizeof(listint_t));
	if (ne == NULL || head == NULL)
		return (NULL);

	(*ne).n = n;
	(*ne).next = NULL;

	if (idx == 0)
	{
		(*ne).next = *head;
		*head = ne;
		return (ne);
	}
	i = 0;
	while (te && i < idx)
	{
		if (i == idx - 1)
		{
			(*ne).next = (*te).next;
			(*te).next = ne;
			return (ne);
		}
		else
			te = (*te).next;
		i++;
	}
	return (NULL);
}
