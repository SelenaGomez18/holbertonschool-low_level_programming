#include "main.h"

/**
 * _print_rev_recursion - Function that print a string in reverse
 *
 * @s: The string taht print in reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar ('\n');
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar (*s);
}
