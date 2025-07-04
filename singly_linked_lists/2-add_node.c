#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
    list_t *new;
    char *dup;
    unsigned int len = 0;

    if (str == NULL)
        return (NULL);
    
}