#include "main.h"

/**
 * puts_half - Imprime la segunda mitad de una cadena de caracteres.
 * @str: Puntero a la cadena de caracteres.
 *
 * Return: void (no retorna ningún valor)
 */
void puts_half(char *str)
{
	int i = 0, n;

	for (; str[i]; i++)
		;
	if (i % 2 != 0)
		n = (i + 1) / 2;
	else
		n = i / 2;
	for (; n < i; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
