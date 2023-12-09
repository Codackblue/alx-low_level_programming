#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *f;
	dlistint_t *fnew;

	fnew = malloc(sizeof(dlistint_t));
	if (fnew == NULL)
		return (NULL);

	fnew->n = n;
	fnew->next = NULL;

	f = *head;

	if (f != NULL)
	{
		while (f->next != NULL)
			f = f->next;
		f->next = fnew;
	}
	else
	{
		*head = fnew;
	}

	fnew->prev = f;

	return (fnew);
}
