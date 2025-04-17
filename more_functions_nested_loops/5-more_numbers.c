#include "main.h"

/**
 *  print_number -prints the numbers, from 0 to 9
 *
 * @n:The number to print
 *
 * Return: void
 */
void print_number(int n)
{
	if (n >= 10)
		_putchar(n / 10 + '0');
	_putchar(n % 10 + '0');
}

/**
 * more_numbers - Prints numbers from 0 to 14, 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, c;

	for (i = 0; i < 10; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			print_number(c);
		}
		_putchar(10);
	}
}
