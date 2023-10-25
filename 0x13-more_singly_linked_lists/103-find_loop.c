#include "lists.h"

/**
 * find_listint_loop - linkd find_listint_loops
 * @head: head of linkee list
 *
 * Return: print node address
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slo = head;
	listint_t *fas = head;

	if (head == NULL)
		return (NULL);

	while (slo && fas && (*fas).next)
	{
		fas = (*(*fas).next).next;
		slo = (*slo).next;
		if (fas == slo)
		{
			slo = head;
			while (slo != fas)
			{
				slo = (*slo).next;
				fas = (*fas).next;
			}
			return (fas);
		}
	}

	return (NULL);
}
