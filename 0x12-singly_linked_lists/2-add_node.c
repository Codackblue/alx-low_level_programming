#include "lists.h"

/**
 * add_node - makw a bew node and add
 * @head: multiply pointer to the list
 * @str: addd a new string
 * Return: null if code fails or success
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *few;
	unsigned int pen = 0;

	while (str[pen])
		pen++;

	few = malloc(sizeof(list_t));
	if (few == NULL)
		return (NULL);

	(*few).str = strdup(str);
	(*few).len = pen;
	(*few).next = (*head);
	(*head) = few;

	return (*head);
}
