#include "main.h"

/**
 * print_chessboard - Prints the chessboard.
 * @a: Pointer to a 2D array representing the chessboard (8x8).
 *
 * Description: This function prints an 8x8 chessboard, where each element
 * of the array represents a piece or empty square.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
