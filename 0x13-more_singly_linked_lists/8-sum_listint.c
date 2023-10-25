#include "lists.h"

/**
 * sum_listint - givea a detail on the sum of that calculations
 * @head: node 1
 *
 * Return: sum total
 */
int sum_listint(listint_t *head)
{
	int p = 0;
	listint_t *te = head;

	while (te)
	{
		p += (*te).n;
		te = (*te).next;
	}

	return (p);
}
