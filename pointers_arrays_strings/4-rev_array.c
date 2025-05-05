#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 *
 * @a: pointer to reverse a array
 * @n: number of elements of a array
 *
 * Return: Void
*/
void reverse_array(int *a, int n)
{
	int *start = a;
	int *end = a + n - 1;
	int aux;

	for (; start < end ;)
	{
		aux = *start;
		*start = *end;
		*end = aux;
		start++, end--;
	}
}
