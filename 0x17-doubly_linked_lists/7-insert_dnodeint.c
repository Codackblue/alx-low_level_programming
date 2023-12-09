#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at
 * a given position
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *fnew;
	dlistint_t *fhead;
	unsigned int f;

	fnew = NULL;
	if (idx == 0)
		fnew = add_dnodeint(h, n);
	else
	{
		fhead = *h;
		f = 1;
		if (fhead != NULL)
			while (fhead->prev != NULL)
				fhead = fhead->prev;
		while (fhead != NULL)
		{
			if (f == idx)
			{
				if (fhead->next == NULL)
					fnew = add_dnodeint_end(h, n);
				else
				{
					fnew = malloc(sizeof(dlistint_t));
					if (fnew != NULL)
					{
						fnew->n = n;
						fnew->next = fhead->next;
						fnew->prev = fhead;
						fhead->next->prev = fnew;
						fhead->next = fnew;
					}
				}
				break;
			}
			fhead = fhead->next;
			f++;
		}
	}

	return (fnew);
}
