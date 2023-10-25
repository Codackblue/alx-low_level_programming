#include "lists.h"

/**
 * free_listint_safe - a program thst prints linkee list
 * @h: list a pointer to be printed
 *
 * Return: a number for success
 */
size_t free_listint_safe(listint_t **h)
{
	size_t le = 0;
	int di;
	listint_t *te;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h)
	{
		di = *h - (*(*h)).next;
		if (di > 0)
		{
			te = (*(*h)).next;
			free(*h);
			*h = te;
			le++;
		}
		else
		{
			free(*h);
			*h = NULL;
			le++;
			break;
		}
	}

	*h = NULL;

	return (le);
}
