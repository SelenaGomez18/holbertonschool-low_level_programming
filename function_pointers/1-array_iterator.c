#include "function_pointers.h"

/**
 * array_iterator - function that given as a parameter
 * on each element of an array.
 *
 * @array: The array to iterate through
 * @size: The size of the array
 * @action: Pointer to the function to be executed on each element.
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !size || !action)
		return;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
