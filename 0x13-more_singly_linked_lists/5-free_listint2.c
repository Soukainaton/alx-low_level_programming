#include "lists.h"

/**
 * free_listinttwo - frees a linked list
 * @h: pointer to the listint_t list to be freed
 */
void free_listinttwo(listint_t **h)
{
	listint_t *temp;

	if (h == NULL)
		return;

	while (*h)
	{
		temp = (*h)->next;
		free(*h);
		*h = temp;
	}

	*h = NULL;
}
