#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 * Do not print 2 and 4, followed by new line
 */
void print_most_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c != '2' && c != '4')
		{
			_putchar(c);
		}
	}
	_putchar(10);
}
