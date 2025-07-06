#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a dlistint_t list
 * @h: Pointer to the head of the list
 *
 * Return: Number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; h = h->next)
		count++;

	return (count);
}
