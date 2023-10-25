#include "lists.h"

/**
 * add_nodeint - nodws at the begiining
 * @head: first node piinter
 * @n: insert sata
 *
 * Return: NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *pe;

	pe = malloc(sizeof(listint_t));
	if (pe == NULL)
		return (NULL);

	(*pe).n = n;
	(*pe).next = *head;
	*head = pe;

	return (pe);
}
