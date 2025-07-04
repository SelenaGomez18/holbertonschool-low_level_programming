#include "lists.h"
#include <stdlib.h>
#include <string.h>

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
list_t *add_node(list_t **head, const char *str)
{
    list_t *new = NULL;

    if (!str)
        return (NULL);
    
    new = calloc(1, sizeof(list_t));
    if (new == NULL)
        return (NULL);
    
    new->str = strdup(str);
    if (new->str == NULL)
    {
        free(new);
        return (NULL);
    }
    
    new->len = _strlen(new->str);
    new->next = *head;
    *head = new;

    return (new);
}
