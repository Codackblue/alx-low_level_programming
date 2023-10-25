#include "lists.h"

/**
 * pop_listint - pop_listnt to be printed
 * @head: head pointer to be printed
 *
 * Return: inside date return(success)
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *te;
	int no;

	if (head == NULL || *head == NULL)
		return (0);

	no = (*(*head)).n;
	te = (*(*head)).next;
	free(*head);
	*head = te;

	return (no);
}
