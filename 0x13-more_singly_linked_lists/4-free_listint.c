#include "lists.h"

/**
 * free_listint - frees a linked list
 * @h: listint_t list to be freed
 */
void free_listint(listint_t *h)
{
	listint_t *temp;

	while (h)
	{
		temp = h->next;
		free(h);
		h = temp;
	}
}
