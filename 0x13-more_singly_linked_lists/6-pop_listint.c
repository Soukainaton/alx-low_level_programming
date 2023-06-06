#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @h: pointer to the first node in the linked list 
 *
 * Return: the data inside the deleted node,
 * or 0 if the linked list is empty
 */
int pop_listint(listint_t **h)
{
	listint_t *temp;
	int num;

	if (!h || !*h)
		return (0);

	num = (*h)->n;
	temp = (*h)->next;
	free(*h);
	*h = temp;

	return (num);
}

