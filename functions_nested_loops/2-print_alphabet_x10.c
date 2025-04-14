#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase
 * followed new line
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar(10);
}

/**
 * print_alphabet_x10 - Imprime el abecedario en minúsculas 10 veces
 */
void print_alphabet_x10(void)

{
	char character;

	for (character = 0; character < 10; character++)
	{
		print_alphabet();
	}
}
