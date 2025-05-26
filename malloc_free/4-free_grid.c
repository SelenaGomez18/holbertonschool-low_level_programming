#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Libera la memoria asignada para una matriz 2D de enteros
 * previamente creada con alloc_grid.
 * @grid: Puntero a la matriz 2D que se va a liberar.
 * @height: Número de filas de la matriz.
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int h = 0;

	for (; h < height; h++)
		free(*(grid + h));

	free(grid);
}
