#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: string of type int
 * @c: char
 *
 * Return: ptr
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = NULL;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = (char *)malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}
