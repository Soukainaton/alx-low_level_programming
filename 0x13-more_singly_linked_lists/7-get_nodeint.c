#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @h: pointer to the first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node looked for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *h, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = h;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
