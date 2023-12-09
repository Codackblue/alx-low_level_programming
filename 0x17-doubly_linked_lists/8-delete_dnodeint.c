#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *fh;
	dlistint_t *fh2;
	unsigned int f;

	fh = *head;

	if (fh != NULL)
		while (fh->prev != NULL)
			fh = fh->prev;

	f = 0;

	while (fh != NULL)
	{
		if (f == index)
		{
			if (f == 0)
			{
				*head = fh->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				fh2->next = fh->next;

				if (fh->next != NULL)
					fh->next->prev = fh2;
			}

			free(fh);
			return (1);
		}
		fh2 = fh;
		fh = fh->next;
		f++;
	}

	return (-1);
}
