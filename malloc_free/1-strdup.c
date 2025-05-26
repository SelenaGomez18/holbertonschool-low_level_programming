#include "main.h"
#include <stdlib.h>

char *_strdup(char *str)
{
    char *copy = NULL;
    int i, len = 0;
    
    if (str == NULL)
        return (NULL);

    for (i = 0; str[i] != '\0'; i++)
        len++;

    copy = malloc((len + 1)*sizeof(char*));
    if (copy == NULL)
        return (NULL);

    for (i = 0; i <= len; i++)
        copy[i] = str[i];

    return (copy);
}
