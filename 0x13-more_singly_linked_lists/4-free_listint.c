#include "lists.h"

/**
 * free_listint - release q linked list for me
 * @head: lintbqnd listent_t
 */
void free_listint(listint_t *head)
{
	listint_t *te;

	while (head)
	{
		te = (*head).next;
		free(head);
		head = te;
	}
}
