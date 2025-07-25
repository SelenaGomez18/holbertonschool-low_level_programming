#include "lists.h"
#include <stdlib.h>
/**
 * free_list - Frees a list_t list
 * @head: Pointer to the head of the list
 */
void free_list(list_t *head)
{
	for (; head != NULL; head = head->next)
	{
		free(head->str);
		free(head);
	}
}
