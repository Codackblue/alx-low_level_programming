#include "lists.h"

/**
 * add_node_end - create a new code
 * @head: a list of double pinter
 * @str: put string in the node
 *
 * Return: null if failed or address if success
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *few;
	list_t *ftmp = *head;
	size_t pen = 0;

	while (str[pen])
		pen++;

	few = malloc(sizeof(list_t));
	if (few == NULL)
		return (NULL);

	(*few).str = strdup(str);
	(*few).len = pen;
	(*few).next = NULL;

	if (*head == NULL)
	{
		*head = few;
		return (few);
	}

	while (ftmp->next)
		ftmp = (*ftmp).next;

	(*ftmp).next = few;

	return (few);
}
