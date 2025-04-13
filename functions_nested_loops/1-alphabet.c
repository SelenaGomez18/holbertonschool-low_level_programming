#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line
 *
 * Description: This function uses _putchar to print all
 * lowercase letters from 'a' to 'z', followed by a newline.
 */

void print_alphabet(void)

{
	char character;

	for (character = 'a'; character <= 'z'; character++)
	{
		_putchar(character);  /* Print each character */
	}
	_putchar(10);
}
