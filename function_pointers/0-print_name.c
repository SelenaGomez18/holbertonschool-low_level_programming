#include "function_pointers.h"

/**
 * print_name - Function that prints name
 *
 * @name: name of person
 * @f: pointer to function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;

	(*f)(name);
}
