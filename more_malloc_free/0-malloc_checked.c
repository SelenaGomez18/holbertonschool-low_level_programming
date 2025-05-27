#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc.
 *
 * @b: bytes to reserved
 *
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;

	ptr = malloc(b)
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
