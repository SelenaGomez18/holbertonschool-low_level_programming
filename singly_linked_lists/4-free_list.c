#include "lists.h"
#include <stdlib.h>

void free_list(list_t *head)
{
    for (; head != NULL; head=head->next)
    {
        free(head->str);
        free(head);
    }
}
