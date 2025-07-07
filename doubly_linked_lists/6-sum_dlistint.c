#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) in a dlistint_t list
 * @head: Pointer to the head of the doubly linked list
 *
 * Return: The sum of all the data (n), or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = NULL;

	for (current = head; current != NULL; current = current->next)
	{
		sum += current->n;
	}

	return (sum);
}
