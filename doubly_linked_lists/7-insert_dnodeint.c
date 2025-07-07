#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a
 * given index in a dlistint_t list
 * @h: Double pointer to the head of the list
 * @idx: Index at which to insert the new node (starting from 0)
 * @n: Integer data to store in the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *current = NULL;
	unsigned int i;

	if (idx == 0)
		return (add_dnodeint(h, n));

	current = *h;
	for (i = 0; current != NULL; i++, current = current->next)
	{
		if (i == idx - 1)
		{
			if (current->next == NULL)
				return (add_dnodeint_end(h, n));

			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);

			new->n = n;
			new->next = current->next;
			new->prev = current;
			current->next = new;

			return (new);
		}
	}

	return (NULL);

}
