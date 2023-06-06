#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *h)
{
	int sum = 0;
	listint_t *temp = h;

	while (temp)
	{ 
		sum += temp->n;
		temp = temp->next;

	}

	return (sum);
}
