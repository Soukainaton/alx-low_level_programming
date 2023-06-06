#include "lists.h"

/**
 * add_nodeint_end - adds node at the end of a linked list
 * @h: pointer to the first elemnt in the list
 * @n: data to be added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **h, const int n)
{
	listint_t *new;
	listint_t *temp = *h;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*h == NULL)
	{
		*h = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
