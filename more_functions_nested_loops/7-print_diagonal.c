#include"main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * @n: is the number of times the character \ should be printed.
 *
 * Return : void.
 */
void print_diagonal(int n)
{
	int a, s;

	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			for (s = 0; s < a; s++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar(10);
		}
	}
}
