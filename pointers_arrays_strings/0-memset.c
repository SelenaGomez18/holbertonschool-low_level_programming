#include "main.h"

/**
 * _memset - Fills a block of memory with a constant byte.
 * @s: Pointer to the memory area to be filled.
 * @b: The constant byte to fill the memory with.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i = 0;

    for (; i < n; i++)
    {
        s[i] = b;
    }

    return (s);
}
