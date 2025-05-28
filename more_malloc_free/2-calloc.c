#include "main.h"
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
    char *ptr = NULL;
    unsigned int total_size;
    unsigned i;

    if (nmemb == 0 || size == 0)
        return (NULL);
    
    total_size = nmemb * size;

    ptr = malloc(total_size * sizeof(char));

    if (ptr == NULL)
        return (NULL);

    for (i = 0; i < total_size; i++)
    {
        ptr[i] = 0;
    }
    
    return (ptr);
}
