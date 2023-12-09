#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *fnew;
	dlistint_t *f;

	fnew = malloc(sizeof(dlistint_t));
	if (fnew == NULL)
		return (NULL);

	fnew->n = n;
	fnew->prev = NULL;
	f = *head;

	if (f != NULL)
	{
		while (f->prev != NULL)
			f = f->prev;
	}

	fnew->next = f;

	if (f != NULL)
		f->prev = fnew;

	*head = fnew;

	return (fnew);
}
