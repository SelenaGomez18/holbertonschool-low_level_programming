#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers from min to max (inclusive).
 * @min: The minimum value in the array.
 * @max: The maximum value in the array.
 *
 * Return: Pointer to the newly created array,
 *         or NULL if min > max or malloc fails.
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL);

	for (i = 0; min + i <= max; i++)
		array[i] = min + i;

	return (array);
}
