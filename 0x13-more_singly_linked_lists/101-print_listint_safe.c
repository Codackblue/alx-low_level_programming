#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - linked list
 * @head: node linked pointer
 * Return: novel node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp = NULL;
	const listint_t *l = NULL;
	size_t count = 0;
	size_t ne;

	tmp = head;
	while (tmp)
	{
		printf("[%p] %i\n", (void *)tmp, (*tmp).n);
		count++;
		tmp = (*tmp).next;
		l = head;
		ne = 0;
		while (ne < count)
		{
			if (tmp == l)
			{
				printf("-> [%p] %i\n", (void *)tmp, (*tmp).n);
				return (count);
			}
			l = (*l).next;
			ne++;
		}
		if (head == NULL)
			exit(98);
	}
	return (count);
}
