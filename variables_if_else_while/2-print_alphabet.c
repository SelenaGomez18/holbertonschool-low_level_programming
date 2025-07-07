#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Description: This function prints all the lowercase letters of the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char character;

/* Imprimir las characters del abecedario en minúsculas */
for (character = 'a'; character <= 'z'; character++)
{
putchar(character);  /* Imprime cada character */
}
putchar('\n');  /* Añadir un salto de línea al final */
return (0);
}
