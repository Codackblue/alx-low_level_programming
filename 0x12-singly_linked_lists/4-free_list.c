#include "lists.h"

/**
 * free_list - make the linked list free
 * @head: list to be freed
 */
void free_list(list_t *head)
{
	list_t *ftmp;

	while (head)
	{
		ftmp = (*head).next;
		free((*head).str);
		free(head);
		head = ftmp;
	}
}
