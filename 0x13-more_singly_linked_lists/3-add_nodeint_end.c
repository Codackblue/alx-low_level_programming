#include "lists.h"

/**
 * add_nodeint_end - purs a new node at the end
 * @head: first pointer list
 * @n: pointer data
 *
 * Return: return ne
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ne;
	listint_t *te = *head;

	ne = malloc(sizeof(listint_t));
	if (ne == NULL)
		return (NULL);

	(*ne).n = n;
	(*ne).next = NULL;

	if (*head == NULL)
	{
		*head = ne;
		return (ne);
	}

	while ((*te).next)
		te = (*te).next;

	(*te).next = ne;

	return (ne);
}
