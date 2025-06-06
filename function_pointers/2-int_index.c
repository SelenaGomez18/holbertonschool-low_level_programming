#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 *
 * @array: Pointer to the array
 * @size: Number of elements in the array
 * @cmp: Pointer a function
 *
 * Return: If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || size <= 0 || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
