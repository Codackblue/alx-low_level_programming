#include "lists.h"

/**
 * free_listint2 - creqtes a linked list
 * @head: listen_t pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *te;

	if (!head)
		return;

	while (*head)
	{
		te = (*(*head)).next;
		free(*head);
		*head = te;
	}

	*head = NULL;
}
