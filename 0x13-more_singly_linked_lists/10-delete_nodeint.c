#include "lists.h"

/**
 * delete_nodeint_at_index -remove a node from my list
 * @head: first estimate pointer
 * @index: node index
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *te = *head;
	listint_t *curr = NULL;
	size_t m = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*(*head)).next;
		free(te);
		return (1);
	}

	while (m < index - 1)
	{
		if (te == NULL || ((*te).next) == NULL)
			return (-1);
		te = (*te).next;
		m++;
	}


	curr = (*te).next;
	(*te).next = (*curr).next;
	free(curr);

	return (1);
}
