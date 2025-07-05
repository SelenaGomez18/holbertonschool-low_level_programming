#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strlen - Returns the length of a string
 * @s: pointer to the string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int a = 0;

	for (; s[a] != '\0'; a++)
	;

	return (a);
}
/**
 * 
 */
list_t *add_node_end(list_t **head, const char *str)
{
    
    list_t *new = NULL;
    list_t *i = NULL;

    if (!str)
        return (NULL);
    
    new = malloc(sizeof(list_t));
    if (new == NULL)
        return (NULL);
    
    new->str = strdup(str);
    new->len = _strlen(new->str);
    new->next = NULL;

    if(*head == NULL)
    {
        *head = new;
    }
    else
    {
        for (i = *head; i->next != NULL; i = i->next)
            ;
    
        i->next = new;
    }
    
    return (new);
}
