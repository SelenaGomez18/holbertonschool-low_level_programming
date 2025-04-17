#include "main.h"

/* Helper function to print a number using _putchar */
void print_number(int n)
{
	if (n >= 10)
		_putchar(n / 10 + '0');
	_putchar(n % 10 + '0');
}

/* Function that prints numbers 0 to 14, ten times */
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
