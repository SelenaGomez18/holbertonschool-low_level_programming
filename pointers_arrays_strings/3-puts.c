#include "main.h"
#include <unistd.h>

/**
 * _puts - prints a string
 *
 * @str: pointer to the string
 *
 * Return - void
 */
void _puts(char *str)
{
	while (*str)
	{
		write(1, str, 1);
			str++;
	}
	write(1, &("\n"), 1);
}
