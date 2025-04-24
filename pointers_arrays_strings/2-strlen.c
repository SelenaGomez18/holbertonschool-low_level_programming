#include "main.h"

int _strlen(char *s)
{
    int a = 0;
    
    for (; s[a] != '\0'; a++)
    ;

    return(a);
}