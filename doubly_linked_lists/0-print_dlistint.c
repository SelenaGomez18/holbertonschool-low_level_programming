#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Imprime todos los elementos de una lista dlistint_t
 * @h: Puntero al primer nodo de la lista
 *
 * Return: Número total de nodos impresos
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; h = h->next, count++)
	{
		printf("%d\n", h->n);
	}

	return (count);
}
