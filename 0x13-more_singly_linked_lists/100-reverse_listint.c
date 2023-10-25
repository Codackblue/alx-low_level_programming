#include "lists.h"

/**
 * reverse_listint - link reversal
 * @head: foem head
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv = NULL;
	listint_t *nxt = NULL;

	while (*head)
	{
		nxt = (*(*head)).next;
		(*head)->next = prv;
		prv = *head;
		*head = nxt;
	}

	*head = prv;

	return (*head);
}
