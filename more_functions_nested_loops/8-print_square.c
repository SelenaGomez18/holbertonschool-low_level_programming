#include"main.h"

/**
 * print_square - prints a square, followed by a new line.
 *
 * @size: unction should print only a new line
 *
 * Returtn : void
 */
void print_square(int size)
{
	int a, s;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (s = 0; s < size; s++)
			{
				_putchar('#');
			}
			_putchar(10);
		}
	}
}
