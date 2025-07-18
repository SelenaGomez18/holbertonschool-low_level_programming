#include "lists.h"
#include <stdlib.h>


/**
 * free_dlistint - Frees a dlistint_t list
 * @head: Pointer to the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next = NULL;

	for (; head != NULL; head = next)
	{
		next = head->next;
		free(head);
	}
}
